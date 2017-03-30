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
 * Práctica 4. I2C en Arduino. Maestro del bus.
 * 
 * En el arranque del sistema, el programa debe realizar las siguientes
 * operaciones:
 *
 * - Configurar la biblioteca Wire.
 * 
 * El programa debe implementar la siguiente tarea periódica:
 * 
 * - Cada segundo debe enviar un mensaje a uno de los esclavos del bus con la
 *   orden de encender (ON: 0x01) o apagar (OFF: 0x00) el LED_BUILTIN
 *
 *
 * Para ello se proponen las siguientes funciones:
 * 
 * 
 * - void Wire.begin(address)
 * 
 * Parámetros: 
 * 
 * - address: dirección del dispositivo en el bus. Si el dispositivo es el
 *   maestro, la dirección es opcional.
 * 
 * Función que inicializa las comunicaciones I2C a través de los pines pre-configurados:
 * - Arduino Uno: A4 (SDA), A5 (SCL)
 * - Arduino Mega: 20 (SDA), 21 (SCL)
 *
 *
 * - void Wire.beginTransmission(address)
 * 
 * Parámetros: 
 * 
 * - address: dirección del dispositivo esclavo con el que se desea establecer
 *   una comunicación.
 *
 * Función que comienza una transmisión enviando la señal de START al bus y, a
 * continuación, la dirección del dispositivo esclavo pasada como parámetro.
 * 
 *
 * - void Wire.write(value/string/data, length)
 * 
 * Parámetros: 
 * 
 * - value/string/data, length: datos a enviar, puede ser un byte (value), una
 *   cadena de caracteres (string) o un conjunto de bytes (data, length)
 *
 * Función que envía datos a través del bus al esclavo previamente seleccionado.
 *
 *
 * - void Wire.endTransmission()
 * 
 * Parámetros: 
 * 
 * - Ninguno
 *
 * Función que finaliza la comunicación con el dispositivo esclavo.
 *
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

