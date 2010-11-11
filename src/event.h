/*
 *
 *  BlueZ - Bluetooth protocol stack for Linux
 *
 *  Copyright (C) 2006-2010  Nokia Corporation
 *  Copyright (C) 2004-2010  Marcel Holtmann <marcel@holtmann.org>
 *
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 *
 */

int btd_event_request_pin(bdaddr_t *sba, struct hci_conn_info *ci);
void btd_event_advertising_report(bdaddr_t *local, le_advertising_info *info);
void btd_event_inquiry_result(bdaddr_t *local, bdaddr_t *peer, uint32_t class, int8_t rssi, uint8_t *data);
void btd_event_set_legacy_pairing(bdaddr_t *local, bdaddr_t *peer, gboolean legacy);
void btd_event_remote_class(bdaddr_t *local, bdaddr_t *peer, uint32_t class);
void btd_event_remote_name(bdaddr_t *local, bdaddr_t *peer, uint8_t status, char *name);
void btd_event_conn_complete(bdaddr_t *local, uint8_t status, uint16_t handle, bdaddr_t *peer);
void btd_event_disconn_complete(bdaddr_t *local, uint8_t status, uint16_t handle, uint8_t reason);
void btd_event_bonding_process_complete(bdaddr_t *local, bdaddr_t *peer, uint8_t status);
void btd_event_simple_pairing_complete(bdaddr_t *local, bdaddr_t *peer, uint8_t status);
void btd_event_setscan_enable_complete(bdaddr_t *local);
void btd_event_le_set_scan_enable_complete(bdaddr_t *local, uint8_t status);
void btd_event_returned_link_key(bdaddr_t *local, bdaddr_t *peer);
int btd_event_get_io_cap(bdaddr_t *local, bdaddr_t *remote,
						uint8_t *cap, uint8_t *auth);
int btd_event_set_io_cap(bdaddr_t *local, bdaddr_t *remote,
						uint8_t cap, uint8_t auth);
int btd_event_user_confirm(bdaddr_t *sba, bdaddr_t *dba, uint32_t passkey);
int btd_event_user_passkey(bdaddr_t *sba, bdaddr_t *dba);
int btd_event_user_notify(bdaddr_t *sba, bdaddr_t *dba, uint32_t passkey);
int btd_event_link_key_notify(bdaddr_t *local, bdaddr_t *peer,
				uint8_t *key, uint8_t key_type,
				int pin_length, uint8_t old_key_type);
