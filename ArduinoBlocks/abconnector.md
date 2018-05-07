# **CONFIGURACIÓN DE  ![](imágenes/ab.png) PARA QUE EL ALUMNADO PUEDA DESCARGAR SUS PROGRAMAS EN EL MONTAJE QUE EL PROFESOR HA REALIZADO EN ARDUINO**

## ORDENADOR SERVIDOR (PROFESOR)
1. Instalar [ArduinoBlocks Connector][90b03efc].
2. Ejecutar ArduinoBlocks Connector
3. Obtener la IP del ordenador. Para ello, pulsa la tecla Windows. A continuación, escribe “cmd” y pulsa intro. En el terminal que aparece, escribe “ipconfig”. En el ordenador del Aula de Tecnología es 192.168.14.100.
4. Conecta la placa Arduino al ordenador servidor.
5. Localiza (por ejemplo, con el IDE de Arduino), el puerto en el que está conectado. Por ejemplo: COM3

  [90b03efc]: http://www.arduinoblocks.com/web/site/abconnector "haz clic para descargar ArduinoBlocks Connector para Windows"


## ORDENADOR CLIENTE (ALUMNADO)
1. Abre tu programa en ArduinoBlocks
2. Haz clic en la rueda dentada ![](imágenes/rueda.jpg).
3. Escribe en la caja Host la IP que te proporcione el profesor.![](imágenes/host.png)
5. En el Aula de Tecnología del Instituto, la IP es: **192.168.14.100:9987** (9987 es el puerto donde “escucha” ArduinoBlocks Connector.
6. Elige el mismo puerto al que está conectado el Arduino. En nuestro ejemplo, COM3.
7. Para subir, haz clic en el botón ![](imágenes/subir.png), y en unos pocos segundos tu sketch (programa de Arduino) habrá llegado a la placa del profesor.
