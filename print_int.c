#include "main.h"
/**
 * print_int - prints integer
 * @num: input
 */

void print_int(int num)
{
	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}
	if (num / 10)
	{
		print_int(num / 10);
	}
	_putchar(num % 10 + '0');
}
