#include "main.h"
/**
  * print_unsigned_decimal - prints digits in decimal format
  * @num: input that will be printed
  * Return: void
  */
void print_unsigned_decimal(unsigned int num)
{
	if (num >= 10)
	{
		print_unsigned_decimal(num / 10);
	}
	_putchar((num % 10) + '0');
}
