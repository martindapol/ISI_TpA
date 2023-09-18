#include <WiFi.h>
#include <WiFiClientSecure.h>
#include <UniversalTelegramBot.h>

const char* SSID = "ALTOHARD-POLL";
const char* PASS = "@dmin9718";
const char* BOT_TOKEN  = "5932620887:AAHqwftJKeFQ5FU_KFP-kz_mU69OhAo0G4Y";
const unsigned long tiempo = 1000; //tiempo medio entre mensajes de escaneo

const int PIN_RELAY = 26;

//Token de Telegram BOT se obtenienen desde Botfather en telegram
WiFiClientSecure secured_client;
UniversalTelegramBot bot(BOT_TOKEN, secured_client);
unsigned long tiempoAnterior; //última vez que se realizó el análisis de mensajes

String chat_id;
//const char * ID_Chat = "tu_id_chat";//ID_Chat se obtiene de telegram
void mensajesNuevos(int numerosMensajes)
{
  for (int i = 0; i < numerosMensajes; i++)
  {
    String chat_id = bot.messages[i].chat_id;
    String text = bot.messages[i].text;
    if (text == "ON")
    {
      digitalWrite(PIN_RELAY, HIGH); // 
      bot.sendMessage(chat_id, "RELAY encendido!", "");
    }
 
    if (text == "OFF")
    {
      digitalWrite(PIN_RELAY, LOW); // 
      bot.sendMessage(chat_id, "RELAY apagado!", "");
    }
  }
}
 
void setup()
{
  Serial.begin(9600);
  pinMode(PIN_RELAY, OUTPUT); //inicializar  pin 12 digital como salida.
  // Intenta conectarse a la red wifi
  Serial.print("Conectando a la red ");
  WiFi.begin(SSID, PASS);
  secured_client.setCACert(TELEGRAM_CERTIFICATE_ROOT); //Agregar certificado raíz para api.telegram.org
  while (WiFi.status() != WL_CONNECTED)
  {
    Serial.print(".");
    delay(500);
  }
  Serial.print("\nConectado a la red wifi. Dirección IP: ");
  Serial.println(WiFi.localIP());
}
 
void loop()
{
  //Verifica si hay datos nuevos en telegram cada 1 segundo
  if (millis() - tiempoAnterior > tiempo)
  {
    int numerosMensajes = bot.getUpdates(bot.last_message_received + 1);
 
    while (numerosMensajes)
    {
      Serial.println("Comando recibido");
      mensajesNuevos(numerosMensajes);
      numerosMensajes = bot.getUpdates(bot.last_message_received + 1);
    }
 
    tiempoAnterior = millis();
  }
  
}