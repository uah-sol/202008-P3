/**
 * Copyright (C) 2017 UAH. Departamento de Automática

 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 * 
 */

/**
 * 
 * Práctica 3. I2C en Arduino. Esclavo del bus.
 * 
 * En el arranque del sistema, el programa debe realizar las siguientes
 * operaciones:
 *
 * - Configurar la biblioteca Wire.
 * - Instalar el manejador de la función de recepción de datos
 * 
 * La función de recepción debe implementar la siguiente funcionalidad:
 * 
 * - Si el dispositivo esclavo recibe un dato con el valor ON (0x01), debe
 *   encender el LED_BUILTIN. Si, por el contrario, recibe un dato con el valor
 *   OFF (0x00), deberá apagar el LED_BUILTIN
 *
 *
 * Para ello se proponen las siguientes funciones:
 * 
 * 
 * - void Wire.begin(address)
 * 
 * Parámetros: 
 * 
 * - address: dirección del dispositivo en el bus. 
 * 
 * Función que inicializa las comunicaciones I2C a través de los pines pre-configurados:
 *
 * - Arduino Uno: A4 (SDA), A5 (SCL)
 * - Arduino Mega: 20 (SDA), 21 (SCL)
 *
 * Si el dispositivo actuará de esclavo, deberá introducir la dirección que
 * tendrá dentro del bus.
 *
 *
 * - void Wire.onReceive(function)
 * 
 * Parámetros: 
 * 
 * - function: función que manejará los datos recibidos. La función tendrá el formato:
 * 
 *   void function(int numBytes)
 * 
 *   donde numBytes es el número de bytes leídos.
 *
 * Función que instala un manejador para la recepción de los datos. La función
 * se ejecutará cada vez que llegue un dato con destino al dispositivo.
 * 
 *
 * - int Wire.available()
 * 
 * Parámetros: 
 * 
 * - Ninguno
 *
 * Función que devuelve el número de datos pendientes de leer.
 *
 *
 * - char Wire.read()
 * 
 * Parámetros: 
 * 
 * - Ninguno
 *
 * Función que lee un dato enviado a través del bus.
 *
 *
 */

#include <Wire.h>


void setup() {
  
  // Código de configuración. Solo se ejecutará al comienzo de la aplicación.
  
}

void loop() {
  
  // Código principal de la aplicación. Se ejecutará de forma indefinida.
  
}

