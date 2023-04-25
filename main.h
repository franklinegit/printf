#ifndef main_h
#define main_h

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <math.h>

int _printf(const char *format, ...);
int _putchar(int c);
void print_int(int num);
void print_unsigned_decimal(unsigned int num);
void print_octal(unsigned int num);
void print_hex(unsigned int num);
void printHex(unsigned int num);
void _binary(unsigned int num);

#endif
