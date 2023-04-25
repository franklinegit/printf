#include "main.h"
/**
  * print_octal - prints octal format
  * @num: input to be printed
  * Return: void
  */
void print_octal(unsigned int num)
{
	char octal[32];
	int i = 0;

	do {
		octal[i++] = num % 8 + '0';
		num /= 8;
	} while (num > 0);

	while (--i >= 0)
	{
		_putchar(octal[i]);
	}
}
