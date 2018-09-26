/*
 * File   : addServCharacter.h
 * Author : Gerasimchuk
 * Date   : 18.09.2018
 * Version: 01
*/
#ifndef  ADDSERVCHARACTER_H_
#define  ADDSERVCHARACTER_H_

#define MY_HOME_CONTROLL_UUID_BASE     {{0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x10 }}
#define MY_HOME_CONTROLL_UUID_SERV     0x2020
#define MY_HOME_CONTROLL_UUID_CHAR_TX  0x2121
#define MY_HOME_CONTROLL_UUID_CHAR_RX  0x2222

void services_init(void);


#endif
