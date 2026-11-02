# Proyectos de electrónica aplicada


Soy [Lorhan Fernandes Ribeiro](https://github.com/LucarioFur). Aquí comparto algunos de mis proyectos de electrónica: qué problema resuelven, qué he desarrollado y en qué punto están.


## Multisimulador para aire acondicionado inverter


**Estado: equipo en uso por clientes.**


Desarrollé esta herramienta para ayudar a los técnicos de climatización a comprobar la comunicación y consultar averías en unidades exteriores de aire acondicionado inverter.


## IHM de uso general

Diseñé esta interfaz con pantalla SPI de 2 pulgadas y encoder para mostrar datos y enviar comandos por UART. En el [repositorio de la IHM](https://github.com/LucarioFur/IHM_ESP32_SPI) comparto el firmware, el PDF del esquema y las vistas de la PCB.

El código corresponde al prototipo con ESP32 clásico; el diseño de la placa usa ESP32-C3 y todavía requiere adaptar el firmware.

## Extractor con ESP32 y Alexa

Este [proyecto de control de ventiladores](https://github.com/LucarioFur/Exaustor_Smart_Alexa) reúne lectura de RPM, regulación por PWM y una página web local. También permite cambiar la velocidad mediante Alexa. He publicado el código completo y las conexiones que utiliza.

## Inverter-Link


**Estado: prototipos; validación de cada versión pendiente de documentar.**


He trabajado en dos prototipos para transportar comunicación serie por un enlace inalámbrico: uno con STM32WL y radio, y otro con ESP8266 y Wi-Fi. En ellos he integrado la transmisión de datos y la gestión de los estados del enlace.


## Muestras de código y PCB


He seleccionado algunos [fragmentos comentados y detalles de mis placas](muestras/README.md) para mostrar cómo trabajo.


## Presentación técnica


Durante una entrevista puedo mostrar el funcionamiento del multisimulador y explicar las decisiones que tomé en estos proyectos.



