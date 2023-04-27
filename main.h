#ifndef main_h
#define main_h

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include <stdarg.h>
#include <math.h>

int _printf(const char *format, ...);
int _putchar(int c);
int print_int(int n);
int print_unsigned_int(unsigned int u);
int print_octal(unsigned int o);
int print_hex(unsigned int h, int uppercase);
void printHex(unsigned int num);
int print_binary(unsigned int num);

#endif
