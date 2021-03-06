/*
    Aquamat - Sterownik akwariowy Open Source
    Copyright (C) 2009 Wojciech Todryk (wojciech@todryk.pl)

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
	
	$Id: twi.h 41 2009-02-23 23:01:59Z musashi@todryk.pl $
*/

/** @file twi.h
	@brief Plik nagłówkowy - Obsługa interfejsu TWI.
*/

extern uint8_t twi_byte;

uint8_t twi_send_start(void);
uint8_t twi_send_address (uint8_t);
void twi_send_stop(void);
uint8_t twi_read_byte(uint8_t);
uint8_t twi_write_byte (uint8_t byte);
void twi_init (void);
