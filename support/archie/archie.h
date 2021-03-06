#ifndef ARCHIE_H
#define ARCHIE_H

#include "../../file_io.h"

void archie_init(void);
void archie_poll(void);
void archie_kbd(unsigned short code);
void archie_mouse(unsigned char b, int16_t x, int16_t y);
const char *archie_get_rom_name(void);
const char *archie_get_floppy_name(char b);
void archie_set_rom(char *);
void archie_set_floppy(char i, char *);
char archie_floppy_is_inserted(char i);
void archie_save_config(void);

void archie_set_ar(char i);
char archie_get_ar();
void archie_set_amix(char i);
char archie_get_amix();

#endif // ARCHIE_H
