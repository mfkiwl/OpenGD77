/* -*- coding: binary; -*- */
/* 
 * Copyright (C)2019 Roger Clark. VK3KYY / G4KYF
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */
/* WARNING: THIS FILE USES BINARY (OCTAL) ENCODING, IT USES REMAPPED GLYPHS
 *
 * Translators: SQ7PTE
 *
 * Rev: 3.0
 */
#ifndef USER_INTERFACE_LANGUAGES_POLISH_H_
#define USER_INTERFACE_LANGUAGES_POLISH_H_
/********************************************************************
 *
 * VERY IMPORTANT.
 * This file should not be saved with UTF-8 encoding
 * Use Notepad++ on Windows with ANSI encoding
 * or emacs on Linux with binary encoding
 *
 ********************************************************************/
const stringsTable_t polishLanguage =
{
.LANGUAGE_NAME 			= "Polski", // MaxLen: 16
.language				= "J�zyk", // MaxLen: 16
.menu					= "Spis", // MaxLen: 16
.credits				= "Wsp�tw�rcy", // MaxLen: 16
.zone					= "Strefy", // MaxLen: 16
.rssi					= "Moc sygna�u", // MaxLen: 16
.battery				= "Bateria", // MaxLen: 16
.contacts				= "Kontakt", // MaxLen: 16
.firmware_info				= "Wersja programu", // MaxLen: 16
.last_heard				= "Ostatnio aktywne", // MaxLen: 16
.options				= "Opcje", // MaxLen: 16
.display_options			= "Opcje ekranu", // MaxLen: 16
.channel_details			= "Detale kana�u", // MaxLen: 16
.new_contact				= "Nowy kontakt", // MaxLen: 16
.contact_list				= "Lista kontakt�w", // MaxLen: 16
.hotspot_mode				= "Tryb Hotspot", // MaxLen: 16
.contact_details			= "Detale kontaktu", // MaxLen: 16
.built					= "Kompilacja", // MaxLen: 16
.zones					= "Strefy", // MaxLen: 16
.keypad					= "Klawiatura", // MaxLen: 12 (with .ptt)
.ptt					= "PTT", // MaxLen: 12 (with .keypad)
.locked					= "Zablokowany", // MaxLen: 15
.press_blue_plus_star			= "Niebieski + *", // MaxLen: 19
.to_unlock				= "Odblokowa�", // MaxLen: 19
.unlocked				= "Odblokowany", // MaxLen: 15
.power_off				= "Wy��czanie...", // MaxLen: 16
.error					= "B��D", // MaxLen: 8
.rx_only				= "Tylko odbi�r", // MaxLen: 14
.out_of_band				= "POZA PASMEM", // MaxLen: 14
.timeout				= "CZAS MIN��", // MaxLen: 8
.tg_entry				= "Wpisz numer TG", // MaxLen: 15
.pc_entry				= "Wpisz numer PC", // MaxLen: 15
.user_dmr_id				= "ID u�ytkownika", // MaxLen: 15
.contact 				= "Kontakt", // MaxLen: 15
.accept_call				= "Zaakceptowa�?", // MaxLen: 16
.private_call				= "Rozmowa prywatna", // MaxLen: 16
.squelch				= "Squelch", // MaxLen: 8
.quick_menu 				= "Szybkie menu", // MaxLen: 16
.filter					= "Filtr", // MaxLen: 7 (with ':' + settings: .none, "CC", "CC,TS", "CC,TS,TG")
.all_channels				= "Wszystkie Kana�y", // MaxLen: 16
.gotoChannel				= "Id� do",  // MaxLen: 11 (" 1024")
.scan					= "Skanowanie", // MaxLen: 16
.channelToVfo				= "Kana� --> VFO", // MaxLen: 16
.vfoToChannel				= "VFO --> Kana�", // MaxLen: 16
.group					= "Grupa", // MaxLen: 16 (with .type)
.private				= "Prywatne", // MaxLen: 16 (with .type)
.all					= "Wszystko", // MaxLen: 16 (with .type)
.type					= "Typ", // MaxLen: 16 (with .type)
.timeSlot				= "Time Slot", // MaxLen: 16 (plus ':' and  .none, '1' or '2')
.none					= "Brak", // MaxLen: 16 (with .timeSlot, "Rx CTCSS:" and ""Tx CTCSS:", and .filter)
.contact_saved				= "Zapisz kontakt", // MaxLen: 16
.duplicate				= "Duplikat", // MaxLen: 16
.tg					= "TG",  // MaxLen: 8
.pc					= "PC", // MaxLen: 8
.ts					= "TS", // MaxLen: 8
.mode					= "Tryb",  // MaxLen: 12
.colour_code				= "Kolor Kodu", // MaxLen: 16 (with ':' * .n_a)
.n_a					= "N/A",// MaxLen: 16 (with ':' * .colour_code)
.bandwidth				= "Pasmo", // MaxLen: 16 (with ':' + .n_a, "25kHz" or "12.5kHz")
.stepFreq				= "Krok", // MaxLen: 7 (with ':' + xx.xxkHz fitted)
.tot					= "TOT", // MaxLen: 16 (with ':' + .off or 15..3825)
.off					= "Wy�.", // MaxLen: 16 (with ':' + .timeout_beep, .calibration or .band_limits)
.zone_skip				= "Pomi� Zone", // MaxLen: 16 (with ':' + .yes or .no) 
.all_skip				= "Pomi� All", // MaxLen: 16 (with ':' + .yes or .no)
.yes					= "Tak", // MaxLen: 16 (with ':' + .zone_skip, .all_skip or .factory_reset)
.no					= "Nie", // MaxLen: 16 (with ':' + .zone_skip, .all_skip or .factory_reset)
.rx_group				= "Rx Grup", // MaxLen: 16 (with ':' and codeplug group name)
.on					= "W�.", // MaxLen: 16 (with ':' + .calibration or .band_limits)
.timeout_beep				= "Czas bip", // MaxLen: 16 (with ':' + .off or 5..20)
.factory_reset				= "Reset", // MaxLen: 16 (with ':' + .yes or .no)
.calibration				= "Kalibracja", // MaxLen: 16 (with ':' + .on or .off)
.band_limits				= "Limit pasma", // MaxLen: 16 (with ':' + .on or .off)
.beep_volume				= "G�o�. bip", // MaxLen: 16 (with ':' + -24..6 + 'dB')
.dmr_mic_gain				= "Mikrofon", // MaxLen: 16 (with ':' + -33..12 + 'dB')
.key_long				= "Key long", // MaxLen: 11 (with ':' + x.xs fitted)
.key_repeat				= "Key rpt", // MaxLen: 11 (with ':' + x.xs fitted)
.dmr_filter_timeout			= "Czas filtra", // MaxLen: 16 (with ':' + 1..90 + 's')
.brightness				= "Jasno��", // MaxLen: 16 (with ':' + 0..100 + '%')
.contrast				= "Kontrast", // MaxLen: 16 (with ':' + 12..30)
.colour_invert				= "Kolor:Inwersja", // MaxLen: 16
.colour_normal				= "Kolor:Normalny", // MaxLen: 16
.backlight_timeout			= "�wiecenie", // MaxLen: 16 (with ':' + .no to 30)
.scan_delay				= "Czas skan.", // MaxLen: 16 (with ':' + 1..30 + 's')
.YES					= "TAK", // MaxLen: 8 (choice above green/red buttons)
.NO					= "NIE", // MaxLen: 8 (choice above green/red buttons)
.DISMISS				= "ODWO�A�", // MaxLen: 8 (choice above green/red buttons)
.scan_mode				= "Tryb skan.", // MaxLen: 16 (with ':' + .hold or .pause)
.hold					= "Stop", // MaxLen: 16 (with ':' + .scan_mode)
.pause					= "Pauza", // MaxLen: 16 (with ':' + .scan_mode)
.empty_list				= "Lista pusta", // MaxLen: 16
.delete_contact_qm			= "Usu� kontakt?", // MaxLen: 16
.contact_deleted			= "Kontakt usuniety", // MaxLen: 16
.contact_used				= "Kontakt istnieje", // MaxLen: 16
.in_rx_group				= "W grupie RX", // MaxLen: 16
.select_tx				= "Wybierz TX", // MaxLen: 16
.edit_contact				= "Edytuj kontakt", // MaxLen: 16
.delete_contact				= "Usu� kontakt", // MaxLen: 16
.group_call				= "Lista kontakt�w", // MaxLen: 16
.all_call				= "��cze wszystkich", // MaxLen: 16
.tone_scan				= "Skan. tonu.",//// MaxLen: 16
.cc_scan				= "Skan. CC",//// MaxLen: 16
.low_battery				= "S�ABA BATERIA!!!",//// MaxLen: 16
.Auto					= "Auto", // MaxLen 16 (with .mode + ':') 
.manual					= "Manual",  // MaxLen 16 (with .mode + ':') 
.ptt_toggle				= "PTT toggle", // MaxLen 16 (with ':' + .on or .off)
};
/********************************************************************
 *
 * VERY IMPORTANT.
 * This file should not be saved with UTF-8 encoding
 * Use Notepad++ on Windows with ANSI encoding
 * or emacs on Linux with binary encoding
 *
 ********************************************************************/
#endif /* USER_INTERFACE_LANGUAGES_POLISH_H_ */
