#include <WiFi.h>

WiFiServer server(80);

const char* ssid = "ALTOHARD-POLL";
const char* password = "XXXXXXX";

String header;  // Variable para guardar el HTTP request
const int PIN_LED = 23;

//------------------------CODIGO HTML------------------------------
String pagina = F("<!DOCTYPE html>"
                "<html>"
                "<head>"
                "<meta charset='utf-8' />"
                "<title>Servidor Web ESP32</title>"
                "</head>"
                "<body>"
                "<center>"
                "<h1>Servidor Web ESP32</h1>"
                "<p><a href='/on'><button style='height:50px;width:100px;color:green'>ON</button></a></p>"
                "<p><a href='/off'><button style='height:50px;width:100px;color:red'>OFF</button></a></p>"
                "</center>"
                "</body>"
                "</html>");


void setup() {
  Serial.begin(9600);
  Serial.println("");

  pinMode(PIN_LED, OUTPUT);
  digitalWrite(PIN_LED, LOW);

  // Conexión WIFI
  WiFi.begin(ssid, password);
  //Cuenta hasta 50 si no se puede conectar lo cancela
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.println("WiFi conectado");
  Serial.println(WiFi.localIP());
  server.begin();  // iniciamos el servidor
}

void loop() {
  WiFiClient client = server.available();  // Escucha a los clientes entrantes

  if (client) {                     // Si se conecta un nuevo cliente
    String currentLine = "";        //
    
    while (client.connected()) {    // loop mientras el cliente está conectado
      if (client.available()) {     // si hay bytes para leer desde el cliente
        char c = client.read();     // lee un byte
        header += c;
        if (c == '\n') {  // si el byte es un caracter de salto de linea
          if (currentLine.length() == 0) {
            client.println("HTTP/1.1 200 OK");
            client.println("Content-type:text/html");
            client.println("Connection: close");
            client.println();

            // enciende y apaga el GPIO
            if (header.indexOf("GET /on") >= 0) {
              digitalWrite(PIN_LED, HIGH);
            } else if (header.indexOf("GET /off") >= 0) {
              digitalWrite(PIN_LED, LOW);
            }

            // Muestra la página web
            client.println(pagina);
           // la respuesta HTTP temina con una linea en blanco
            client.println();
            break;
          } else {  // si tenemos una nueva linea limpiamos currentLine
            currentLine = "";
          }
        } else if (c != '\r') {  // si C es distinto al caracter de retorno de carro
          currentLine += c;      // lo agrega al final de currentLine
        }
      }
    }
    // Limpiamos la variable header
    header = "";
    // Cerramos la conexión
    client.stop();
     
  }
}
