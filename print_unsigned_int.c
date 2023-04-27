#include "main.h"

/**
 * print_unsigned_decimal - prints digits in decimal format
 * @u: input
 * Return: count
 */

int print_unsigned_int(unsigned int u)
{
	int count = 0;
	if (u >= 10)
		count += print_unsigned_int(u / 10);
	_putchar((u % 10) + '0');
	++count;
	return (count);
}
