#include "main.h"

/**
 * print_octal - prints octal format
 * @o: input
 * Return: count
 */

int print_octal(unsigned int o)
{
	int count = 0;

	if (o >= 8)
	{
		count += print_octal(o / 8);
	}
	_putchar('0' + o % 8);
	++count;
	return count;
}
