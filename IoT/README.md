# Internet of Thinks (IoT)

## ¿Qué es IoT? 

Se le llama **Internet de las cosas**, en inglés **Internet of Things (IoT)** a la posibilidad de interconexión y transmisión de datos entre objetos cotidianos e internet.

![iot](iot.png)

Los aparatos electrónicos y los dispositivos digitales cotidianos tienen circuitos y sensores que les permite recolectar y compartir datos con la internet sin la intervención de personas. 

## ¿Cómo funciona el IoT?

Los **dispositivos IoT** se conectan con un proceso llamado M2M (machine to machine, o máquina a máquina) en el que dos dispositivos o máquinas cualesquiera se comunican entre sí utilizando cualquier tipo de conectividad (que puede ser cable, WiFi, Bluetooth, etc.), haciendo su trabajo sin la necesidad de que un humano intervenga. No deja de ser el mismo concepto que las conexiones Peer to Peer de los ordenadores para jugar online o compartir archivos.

Entonces nos encontramos que un dispositivo IoT recolecta, procesa y analiza una gran cantidad de información, entre la que se incluye información sobre los hábitos y preferencias de consumo de cada uno de los usuarios, así como por ejemplo poder gestionar su salud u otras utilidades para el día a día que no serían posibles si.  Como, por ejemplo, si hay algún fallo en tu coche, el ordenador a bordo del mismo puede enviar un aviso para que lo lleves al taller.

Un ejemplo de dispositivo IoT es el altavoz inteligente Amazon de Alexa, el cual se encuentra conectado a la red de redes para obtener información e interactúa con otros dispositivos para darnos la capacidad de controlarlos a través de simples comandos de voz. 

## Dispositivos IoT

Un dispositivo IoT consiste en un **objeto** al que se le ha dotado de conexión a Internet y cierta inteligencia software, sobre el que se pueden medir parámetros físicos (mediante **sensores**) o actuar remotamente (**actuadores**) y que por tanto permite generar un ecosistema de servicios alrededor del mismo. 

![Imagen02](sensores_actuadores.png)

Para lograr que sensores y actuadores recolecten y envíen datos del mundo físico a Internet, los dispositivos IoT cuentan con un componente escencial:  el [microcontrolador](https://aprendiendoarduino.wordpress.com/2015/03/23/microcontroladores/). Los microcontroladores son **Sistemas Embebidos de Control** diseñados para realizar funciones dedicadas, normalmente en tiempo real. Al contrario de lo que ocurre con los ordenadores de propósito general, que están diseñados para cubrir un amplio rango de necesidades, los sistemas embebidos se diseñan para cubrir necesidades específicas y por tanto forman parte de multitud de productos en los que se requiere una cierta potencia de proceso como electrodomésticos, vehículos, máquinas, etc.

En el link [historia microprocesadores](historia_microcontroladores.pdf) se muestra una referencia detallada desde el comienzo de los microprocesadores hasta la aparición de los microcontroladores al mercado. Este material, diseñado por el ing. Hugo Pailos, permite comprender cómo la tecnología de los microcontroladores fue evolucionando hasta lo que conocemos en la actualidad.

## Ventajas del IoT

Algunas de las ventajas mas significativas del IoT:

- **Conectividad y Comunicación**: El IoT permite la conexión de dispositivos y sistemas en red, lo que facilita la comunicación y la transferencia de datos en tiempo real entre ellos.

- **Automatización y Eficiencia**: Los dispositivos IoT pueden recopilar datos, analizarlos y tomar decisiones automáticas, lo que lleva a una mayor eficiencia operativa y a la automatización de tareas.

- **Monitoreo Remoto**: El IoT permite el monitoreo y control remoto de dispositivos y sistemas, lo que facilita la supervisión y gestión de procesos desde cualquier ubicación.

- **Mejora de la Productividad**: Al automatizar tareas repetitivas y optimizar procesos, el IoT puede mejorar la productividad en diversas industrias y actividades.

- **Personalización y Experiencia del Usuario**: El IoT permite la personalización de servicios y experiencias para los usuarios, adaptándose a sus necesidades y preferencias individuales.

- **Toma de Decisiones Basada en Datos**: Los datos recopilados por los dispositivos IoT proporcionan información valiosa para tomar decisiones informadas, lo que lleva a una toma de decisiones más precisa y efectiva.


## Microcontroladores ARDUINO

**Arduino** es una plataforma de creación de electrónica de código abierto, la cual está basada en hardware y software libre, flexible y fácil de utilizar para los creadores y desarrolladores. Esta plataforma permite crear diferentes tipos de microordenadores de una sola placa a los que la comunidad de creadores puede darles diferentes tipos de uso.

Para poder entender este concepto, primero vas a tener que entender los conceptos de hardware libre y el software libre. El hardware libre son los dispositivos cuyas especificaciones y diagramas son de acceso público, de manera que cualquiera puede replicarlos. Esto quiere decir que Arduino ofrece las bases para que cualquier otra persona o empresa pueda crear sus propias placas, pudiendo ser diferentes entre ellas pero igualmente funcionales al partir de la misma base.


![Imagen03](arduino.png)

El **Arduino** es una placa basada en un microcontrolador ATMEL. Los microcontroladores son circuitos integrados en los que se pueden grabar instrucciones, las cuales las escribes con el lenguaje de programación que puedes utilizar en el entorno Arduino IDE. Estas instrucciones permiten crear programas que interactúan con los circuitos de la placa.

El microcontrolador de Arduino posee lo que se llama una interfaz de entrada, que es una conexión en la que podemos conectar en la placa diferentes tipos de periféricos. La información de estos periféricos que conectes se trasladará al microcontrolador, el cual se encargará de procesar los datos que le lleguen a través de ellos.

El tipo de periféricos que puedas utilizar para enviar datos al microcontrolador depende en gran medida de qué uso le estés pensando dar. Pueden ser cámaras para obtener imágenes, teclados para introducir datos, o diferentes tipos de sensores.

También cuenta con una interfaz de salida, que es la que se encarga de llevar la información que se ha procesado en el Arduino a otros periféricos. Estos periféricos pueden ser pantallas o altavoces en los que reproducir los datos procesados, pero también pueden ser otras placas o controladores.

## Placas Esp32

**ESP32** es una familia de microcontroladores de la empresa **Espressif Systems**. Su analogía más clara es la de un Arduino esteroides, que incluye Wifi, Bluetooth y otras potentes características extra. 

![Esp32](ESP32.png)

Para mayor información consultar la hoja de datos (datasheet) del fabricante aquí: https://www.electrosoftcloud.com/wp-content/uploads/2021/04/esp32-wroom-32_datasheet_en.pdf.


### Algunas características

#### Tensión de trabajo

El voltaje de funcionamiento de los microprocesadores ESP es de **3,3 V** en comparación con el voltaje de funcionamiento de Arduino de **5 V**. Si las placas se utilizan mientras están conectadas a la toma de corriente, no habrá diferencia en el consumo de energía porque la corriente se reducirá para recolectar la misma cantidad de energía. En el caso de un caso de uso alimentado por batería, la diferencia será mucho mayor porque si la curva de descarga de la batería cae por debajo del voltaje de funcionamiento, el microprocesador se apagará.

Por lo tanto, las placas basadas en ESP tendrán un tiempo de ejecución más prolongado, ya que estas placas podrían funcionar a 4 V, mientras que a 4 V las placas Arduino se apagaron.

#### E/S digital, PWM y pines analógicos

Pines de E/S digitales: la diferencia entre todas las placas cuando se trata de pines de E / S digitales es casi nula. La única diferencia es que las placas más grandes, como la NodeMCU ESP32 (36) y la placa más grande, la Arduino MEGA R3 (54) tiene muchos pines de E/S digitales.

**Pines PWM**: las placas basadas en ESP tienen una mejor relación de pines de E/S digitales a pines PWM porque PWM es utilizado por un pin digital. Todos los pines que pueden utilizarse como salida soportan PWM excepto los pines del 34 al 39.

**Pines analógicos**: la placa cuenta con 16 pines que soportan entradas analógicas que son mapeadas a valores de tensión de 0 - 3.3v mediante un conversor analógico-digital (ADC) con una resolución de 12 bits.
En el camino inverso, la placa cuenta solo con dos pines que pueden utilizarse como salidas analógicas: GPIO25 y GPIO26 mediante un Conversor Digital Analógico (DAC) con una resolución de 8 bits.

#### Memoria flash y SRAM

La memoria flash (espacio del programa), es donde se almacena el boceto de Arduino.
SRAM (memoria estática de acceso aleatorio) es donde el boceto crea y manipula variables durante la ejecución.
EEPROM es el espacio de memoria que los programadores pueden usar para almacenar información a largo plazo.
La memoria flash y EEPROM no son volátiles (la información persiste después del apagado). SRAM es volátil y se perderá al encenderlo.

#### Velocidad de reloj

Todas las placas Arduino funcionan a 16 MHz, lo que significa que el microprocesador puede ejecutar hasta 16 millones de instrucciones por segundo. Eso puede parecer mucho, pero si considera que simplemente configurar el pin digital en alto puede tomar más de 50 ciclos de reloj. Las tarjetas basadas en ESP son mucho más rápidas con una velocidad de reloj de 52 MHz a 160 MHz para el ESP32. Es 10 veces más rápido. Entonces, si está planeando un proyecto grande con muchas operaciones, debe optar por las tarjetas basadas en ESP.

#### INALÁMBRICO

El módulo ESP32 es una solución de Wi-Fi/Bluetooth todo en uno, integrada y certificada en un solo chip. Además, el ESP32 dispone de conexión **BLE**. BLE o **Bluetooth Low Energy** es adecuada para conectar dos dispositivos cercanos y para transmitir poco volumen de datos, de manera no continua. Para transmitir de manera continua es más adecuado el bluetooth tradicional.

## Entorno de trabajo para Esp32
Para comezar a trabajar con ESP32 es necesario instalar:
* Arduino IDE como herramienta de desarrollo.
* Driver de la placa instalado en Arduino IDE.

Para obtener instrucciones paso a paso de cómo instalar el Entorno de Desarrollo (IDE) de Arduino se sugiere visitar el enlace: https://www.arduino.cc/en/Guide, donde encontrará una guía con los pasos necesarios para instalar este software, así como también documentación de referencia y ejemplos.
Actualmente se encuentra en su versión 2.X que a diferencia de la versión anterior se incorporar características muy requeridas de desarrollo como el autocompletado, la integración con los repositorios de código GIT y el debbuger, entre otros. Para mayor información visitar este video: https://www.youtube.com/watch?v=7gymFdvJQ2s.

Otra alternativa es trabajar con el Editor Visual Studio Code e instalar las extensión particulares para hacer desarrollos sobre Arduino. https://www.luisllamas.es/arduino-visual-studio-code/


Una vez instalado **Arduino IDE** es necesario instalar el controlador de la placa. Para ello se deja el siguiente enlace con los pasos necesarios: https://www.electrosoftcloud.com/esp32-configuracion-y-primeros-pasos/. Es también de gran ayuda ver el siguiente video que explica cómo averiguar qué driver es necesario instalar para Win10 según el modelo de la Esp32: https://www.youtube.com/watch?v=JmDxP4O4Trk. En la descripción del video están los enlaces a los drives mencionados.

## Primer ejemplo: Blink

> Para comenzar con un primer ejemplo de aplicación se va
trabajar con el clásico ejemplo de encender y apagar un led usando el esp32 como controlador.

Para comenzar en necesario disponer de los siguientes materiales:
* Placa Esp32
* Led
* Resistencia de 1k (opcional ya que todos los pines de la placa tiene una resitencia Pull-Down y Pull-Up integradas)

![blink](./blink-circuito.png)

### Diseñar lógicamente el circuito con WokWi

**Wokwi** es un simulador de electrónica en línea que permite simular desarrollos sobre Arduino, ESP32 y muchas otras placas, piezas y sensores populares. Para comenzar a utilizarlo solo es necesario crear una cuenta de usuario clásica a partir de un correo electrónico personal.

Una vez creado el usuario, en el home del sitio se selecciona la placa Esp32 desde la opción *start from Scratch*:

![wokwi-start](wokwi_01.png)

Una vez seleccionada la placa se muestra:

![wokwi-init](wokwi_02.png)

En la parte izquierda se habilita un editor para escribir las líneas de código C/C++, al igual que en Arduino IDE.
En la parte derecha se muestra gráficamente la placa y es posible incorporar mediante la opción (+) los dispositivos electronicos como leds, pulsadores, potenciometros, pantallas, etc. Luego se conectan los pines de la placa a los dispositivos agregados y la herramienta actualiza la información de conexionados mediante un archivo JSON que puede gestionarse desde la solapa *diagram.json*. Es posible definir identificadores, colores y posiciones de los elementos dibujados.

De ser necesario, la pestaña *Library Manager* permite cargar librerías específicias de desarrollo según los componentes agregados al desarrollo.

Retornando al ejemplo del **Blink**, el diagrama Wokwi resulta:

![wokwi-blink](wokwi_03.png)

Donde el conector cátodo (-) del led se conecta a la señal **GND** del Esp32, mientras el pin **D12** se conecta con el ánodo o conector positivo (+).

Finalizado el conexionado de la placa, se escribe el código que será instalado y ejecutado. Para compilar, instalar y ejecutar el sketch en la Esp32 se selecciona la opción **Play (>)**.

Desde la opción **Guardar** es posible descargar tanto el código en formato .ino como el archivo de diagrama en formato .json con la configuración de los dispostivos y la placa.

Para ver el código de la solución acceder a esta carpeta: [Práctico 01](./skectchs/Practico%2001/)

# Programación en Arduino
## Lenguaje C/C++

* Creado por Dennis Ritchie en los laboratorios de AT&T entre 1969 y 1973
* Para escribir el SO Unix en un Lenguaje de Alto Nivel e independiente del hardware 
* Basado en el B de Ken Thompson
* En 1978 Ritchie junto a Bryan Kernigan publican el libro: “El lenguaje de programación C”
* A partir de dicho libro surge el lenguaje conocido como “el C de Kernigan y Ritchie” o simplemente “K&R C”
* A mediados de los 80 Bjarne Stroustrup crea el Lenguaje C++

> Para programar un Arduino, el lenguaje estándar es C++, aunque es posible programarlo en otros lenguajes. No es un C++ puro sino que es una adaptación que proveniente de avr-libc que provee de una librería de C de alta calidad para usar con GCC en los microcontroladores AVR de Atmel y muchas funciones específicas para los MCU AVR de Atmel.

### Fundamentos

* Lenguaje de programación estructurada + POO
* Originalmente concebido como de alto nivel, hoy de medio/bajo nivel en comparación con los lenguajes actuales
* Lenguaje Compilado, es decir que se parte del código fuente se compila en una plataforma y se obtiene un ejecutable para esa plataforma
* Manejo libre y a cargo del programador de la memoria
* Lenguaje fuertemente tipado.

### Comentarios

Dos posibilidades para definir comentarios en el código de un sketch:
* Comentario de una sola línea: //comentario...
* Comentario en más de una línea : /*...*/

### Tipo de datos

El ambiente Arduino es realmente C++, con bibliotecas de soporte, y además asume algunos parámetros relativos al microcontrolador, para simplificar el proceso de programación. C++ define una cantidad de tipos de datos distintos.

A continuación se listan tipos de datos comúnmente utilizados en el ambiente **Arduino**, con el tamaño de memoria de cada uno entre paréntesis.

* **boolean** (8 bit)- lógico simple verdadero/falso.
* **byte** (8 bit)- número sin signo entre 0 y 255.
* **char** (8 bit)- número con signo, entre -128 y 127. En algunos casos el compilador intentará interpretar este tipo de dato como un caracter, lo que puede generar resultados inesperados.
* **unsignedchar** (8 bit)- lo mismo que ‘byte’; si es que eso es lo que necesitas, deberías usar ‘byte’, para que el código sea más claro.
* **word** (16 bit)- número sin signo entre, 0 y 65535.
* **unsignedint** (16 bit)- lo mismoque ‘word’. Utiliza ‘word’ por simplicidad y brevedad.
* **int** (16 bit)- número con signo, entre -32768 y 32767. Este tipo es el más usado para variables de propósito general en Arduino, en los códigos de ejemplo que vienen con el IDE.
* **unsignedlong** (32 bit)- número sin signo entre 0 y 4294967295. Este tipo se usa comúnmente para almacenar el resultado de la función millis(), la cual retorna el tiempo que el código actual ha estado corriendo, en milisegundos.
* **long** (32 bit)- número con signo, entre -2,147,483,648 y 2,147,483,647.
* **float** (32 bit)- número con signo, entre 3.4028235E38 y 3.4028235E38. El Punto Flotante no es un tipo nativo en Arduino; el compilador debe realizar varios saltos para poder hacerlo funcionar. Evítalo siempre que te sea posible. Hablaremos de eso más tarde; En una fecha próxima se publicará un tutorial más riguroso en el uso genérico de la matemática de punto decimal en Arduino.

### Variables simples y estructuras de control

Al igual que C++ es posible definir variables simples y estructuradas; y combinarlas con estructuras  de control condicionales y repetitivas. El detalle completo de variables, operadores, funciones, punteros y estructuras de control está disponible en la [documentación de referencia de Arduino](https://www.arduino.cc/reference/en/) 

### Arreglos

Un array (**o arreglo**) es un conjunto estático de valores (todos del mismo tipo) a los que se accede con un número índice. Cualquier valor puede ser recogido haciendo uso del nombre de la variable y el número del índice. El primer valor del arreglo es el que está indicado con el índice 0, es decir el primer valor del conjunto es el de la posición 0. Un array tiene que ser declarado y opcionalmente asignados valores a cada posición antes de ser utilizado.

Tener en cuenta:
>* Para definir: **tipo_de_dato** nombre[size]; O también **tipo_de_dato** nombre[] = {val, val2,….,valn};
>* Para acceder: nombre[índice]
>* Las cadenas tienen un tratamiento especial, pero se manejan como arreglos de caracteres. Por ejemplo: char message[6] = "hello";

### Uso de funciones

![funcion_anatomy](anatomy_function.png)

#### Parámetros por Valor

> Pasar parámetros por valor o copia, las modificaciones realizadas en la función no se mantienen al terminar la misma.
![Picture02](images/function_params_valor.png)

#### Parámetros por referencia

> Los parámetros pasados por referencia pueden ser modificados en la función y dicha modificación sobrevive al final de la misma.
> * Se agrega operador & en la definición del prototipo de la función
int myFuncion(int &p1, int p2)
>
> * Otra manera de lograrlo es utilizar punteros:
>
>     int myFunction(int * p1, int p2)


### Constantes y funciones basicas de E/S

Para **E/S digitales**
| Función| Descripción |
| --- | --- |
|pinMode(pin, modo)|Configura el pin especificado para que se comporte como una entrada (INPUT) o una salida (OUTPUT). Adicionalmente es posible indicar INPUT_PULLUP,  INPUT_PULLDOWN para entradas con resistencias integradas PULL_UP o PULL_DOWN respectivamente|
|digitalWrite(pin, valor)|Escribe un valor HIGH o un LOW en un pin digital.|
|digitalRead(pin)|Lee el valor de un pin digital especificado, ya sea HIGH o LOW.|


Para **E/S analógicas**
| Función| Descripción |
| --- | --- |
|analogRead(pin)|Lee el valor del pin analógico especificado. Las placas Arduino contienen un convertidor analógico a digital multicanal de 10 bits. Esto significa que mapeará los voltajes de entrada entre 0 y el voltaje de funcionamiento (5 V o 3,3 V) en valores enteros entre 0 y 1023. Puntualmente en Esp32 es posible leer lecturas de 0 a 3.3V asignando un valor comprendido entre 0 y 4095.|
|analogWrite(pin,valor)|Escribe un valor analógico ( onda PWM ) en un pin. Se puede usar para encender un LED con diferentes brillos o impulsar un motor a varias velocidades.|
|analogReference()|Configura el voltaje de referencia utilizado para la entrada analógica (es decir, el valor utilizado como la parte superior del rango de entrada). En Esp32 el valor por defecto es 3.3V|


Para **comunicación Serie**
| Función| Descripción |
| --- | --- |
|Serial.begin(speed)|Establece la velocidad de datos en bits por segundo (baudios) para la transmisión de datos en serie. Para comunicarse con Serial Monitor, asegúrese de usar una de las velocidades en baudios enumeradas en el menú en la esquina inferior derecha de su pantalla. Un segundo argumento opcional configura los bits de datos (Serial.begin(speed, config)), paridad y parada. El valor predeterminado es 8 bits de datos, sin paridad, un bit de parada.|
|Serial.read()|Lee los datos seriales entrantes.|
|Serial.print(val,[format])|Imprime datos en el puerto serial como texto ASCII legible por humanos. Este comando puede tomar muchas formas. Los números se imprimen utilizando un carácter ASCII para cada dígito. Los flotantes se imprimen de manera similar como dígitos ASCII, por defecto con dos decimales. Los bytes se envían como un solo carácter. Los caracteres y las cadenas se envían tal cual.|
|Serial.println(val,[format])|Imprime datos en el puerto serie como texto ASCII legible por humanos seguido de un carácter de retorno de carro (ASCII 13 o '\r') y un carácter de nueva línea (ASCII 10 o '\n'). Este comando toma las mismas formas que Serial.print() .|
|Serial.available()|Obtiene la cantidad de bytes (caracteres) disponibles para leer desde el puerto serie. Estos son datos que ya llegaron y se almacenaron en el búfer de recepción en serie (que contiene 64 bytes).|

**Constantes** más usadas:
| Constantes| Descripción |
| --- | --- |
|INPUT/OUTPUT|Permite definir entradas o salidas mendiante la función pinMode().|
|HIGH (5V)/LOW (0V)| Permiten indicar un valor Alto o Bajo de tensión dependiendo la configuración del pin.|
|LED_BUILTIN|La mayoría de las placas Arduino tienen un pin conectado a un LED integrado en serie con una resistencia. La constante LED_BUILTIN es el número del pin al que está conectado el LED integrado. La mayoría de las placas tienen este LED conectado al pin digital 13. Para el caso de los Esp32 este valor corresponde a 2| 

## Comunicación Serial

Los puertos serie son la forma principal de comunicar una placa Arduino con un ordenador. Gracias al puerto serie podemos, por ejemplo, mover el ratón o simular la escritura de un usuario en el teclado, enviar correos con alertas, controlar un robot realizando los cálculos en el ordenador, encender o apagar un dispositivo desde una página Web a través de Internet, o desde una aplicación móvil a través de Bluetooth.

Existen un sin fin de posibilidades en las que se requiere el empleo del puerto serie. Por tanto el puerto serie es un componente fundamental de una gran cantidad de proyectos de Arduino, y es uno de los elementos básicos que debemos aprender para poder sacar todo el potencial de Arduino.

En esta entrada aprenderemos el funcionamiento básico de los puertos serie en Arduino. Al final de la entrada se adjuntan varios códigos de ejemplo, pero antes conviene explicar brevemente algo de teoría sobre qué es un puerto serie, y algunos términos que necesitaremos para entender correctamente el funcionamiento del puerto serie.

### ¿Qué es el puerto serie?
Un puerto es el nombre genérico con que denominamos a los interfaces, físicos o virtuales, que permiten la comunicación entre dos ordenadores o dispositivos.

Un puerto serie envía la información mediante una secuencia de bits. Para ello se necesitan al menos dos conectores para realizar la comunicación de datos, RX (recepción) y TX (transmisión). No obstante, pueden existir otros conductores para referencia de tensión, sincronismo de reloj, etc.

Por el contrario, un puerto paralelo envía la información mediante múltiples canales de forma simultánea. Para ello necesita un número superior de conductores de comunicación, que varían en función del tipo de puerto. Igualmente existe la posibilidad de conductores adicionales además de los de comunicación.

![serie-vs-paralelo](puerto-serie.png)

Históricamente ambos tipos de puertos han convivido en los ordenadores, empleándose los puertos paralelos en aquellas aplicaciones que requerían la transmisión de mayores volúmenes de datos. Sin embargo, a medida que los procesadores se hicieron más rápidos los puertos de serie fueron desplazando progresivamente a los puertos paralelos en la mayoría de aplicaciones.

Un ordenador convencional dispone de varios puertos de serie. Los más conocidos son el popular USB (Universal Serial Port) y el ya casi olvidado RS-232 (el de los antiguos ratones). Sin embargo, dentro del ámbito de la informática y automatización existen una gran cantidad adicional de tipos de puertos serie, como por ejemplo el RS-485, **I2C**, SPI, entre otros.

En ocasiones se refiere a los puertos serie como UART. La **UART** (universally asynchronous receiver/transmitter) es una unidad que incorporan ciertos procesadores, encargada de realizar la conversión de los datos a una secuencia de bits y transmitirlos o recibirlos a una velocidad determinada.


### Ejercitación

> **Caso práctico 02**: desarrollar un sketch que permita encender/apagar un juego de LEDs (uno azul y otro verde) utilizando para ello el puerto serie. La idea es utilizar los dos leds que ya vienen provistos en la placa UTN (uno verde más el led propio de la Esp32) y procesar las siguientes entradas por puerto serie:
> - **v** o **V** para encender el LED verde y apagar el azul
> - **a** o **A** para encender el LED azul y apagar el verde
> 
Para ver el código de la solución acceder a esta carpeta: [Práctico 02](./skectchs/Practico%2002/)

> **Caso práctico 03**: desarrollar un sketch que permita >procesar un comando (en formato texto) recibido por el puerto >serie tal que:
> "LUZ_ON": encienda el LED y active un relay (que podría estar > conectado con el sistema de ilumninación de una habitación).
> "LUZ_OFF": con apague el LED y desactive el relay.

Para ver el código de la solución acceder a esta carpeta: [Práctico 03](./skectchs/Practico%2003/)




## Comunicación I2C

Para cumplimentar los requerimientos del ejercicio 02 es necesario conectar un LCD mediante adaptador I2C a la placa Esp32. Para ello es necesario conocer qué es y comó funciona este protocolo, tal como se muestra en el video de este link: [I2C explicado](https://www.youtube.com/watch?v=kuLgPLrg-cY).