# Instalación ESP8266

Para la instalación en Arduino IDE debemos seguir los siguientes pasos:

1. Abrir ARDUINO IDE
2. Debemos ir a la pestaña ***Archivo***->***Preferencias***.
	- En la pestaña ***Ajustes*** buscamos la opción: ***Gestor de URLs Adicionales de Tarjetas: ***
	- Pegamos la siguiente URL: `http://arduino.esp8266.com/stable/package_esp8266com_index.json`
	- Luego precionamos la opción ***OK*** y automaticamente se cerrara la ventana.
3. Debemos ir a la pestaña ***Herramientas***->***Placa***->***Gestor de tarjetas***.
	- Colocamos en la barra de busqueda ***ESP8266***.
	- Seleccionamos la opción que nos muestre ***esp8266***.
	- Instalamos y luego precionamos la opción de ***Cerrar***.

Con esto tendremos completa la instalación de nuestra tarjeta ESP8266 y lista para ser programada.	 

# Instalación USB Driver ***(Si no reconoce el puerto COM)***

En algunos casos nuestra PC no es capaz de reconocer el dispositivo USB que nosotros conectamos, es por ello que dejaremos un archivo para la instalación del driver con ello nuestra PC deberá ser capaz de reconocer el dispositivo conectado, en caso de que el problema persista asegúrese de que su dispositivo no se este sobre calentando.

[Descarga este driver para Windows][DRIVER_USB]

[DRIVER_USB]: https://www.arduined.eu/files/windows10/CH341SER.zip

1. Descomprimir el archivo ZIP descargado 
2. Seleccionar el archivo para instalación de Windows
	- SETUP.exe
3. Seleccionar CH341SER.INF
4. Click en la opción ***Install***
5. Cuando este instalado cerrar la ventana y listo.!

Con esto estaría lista la instalación del Driver USB para nuestra tarjeta en el Sistema Operativo Windows.

Puede seguir está guía para la instalación como una segunda opción 

[Sigue la guía para instalar el driver CH340][DRIVER_CH340]

[DRIVER_CH340]: https://www.arduined.eu/ch340-windows-10-driver-download/

# PinOut
![](/img/PINOUT_ESP8266.png)

# TL05i 

Descarga el código base en este link : 
[Código_Base_TL05i][TL05i]

[TL05i]: https://github.com/angelisidro/riic4-0/tree/master/codigo_base/riic4_0-ejemplo-tl05i
![](/img/TL05i.png)

# Neopixel 

Descarga el código base en este link : 
[Código_Base_NeoPixel][NeoPixel]

[NeoPixel]: https://github.com/angelisidro/riic4-0/tree/master/codigo_base/riic4_0-test-neopixel
![](/img/neo.png)

# Buzzer 

Descarga el código base en este link : 
[Código_Base_Buzzer][BUZZER]

[BUZZER]: https://github.com/angelisidro/riic4-0/tree/master/codigo_base/riic4_0-test-buzzer
![](/img/buzzer.png)

# Push Button 

Descarga el código base en este link : 
[Código_Base_Button][BUTTON]

[BUTTON]: https://github.com/angelisidro/riic4-0/tree/master/codigo_base/riic4_0-test-button
![](/img/button.png)

# LED Bi-Color 

Descarga el código base en este link : 
[Código_Base_LED][LED]

[LED]: https://github.com/angelisidro/riic4-0/tree/master/codigo_base/riic4_0-test-LED
![](/img/led.png)



