#include "main.h"

/**
 * print_binary - takes num and return it in binary format
 * @num: input that will be converted to binary
 * Return: count
 */

int print_binary(unsigned int num)
{
	int binary[32];
	int count = 0, len = 0;

	if (num == 0)
	{
		_putchar('0');
		++count;
	}
	else
	{
		while (num > 0)
		{
			binary[len++] = '0' + (num & 1);
			num >>= 1;
		}
		while (len--)
		{
			_putchar(binary[len]);
			++count;
		}
	}
	return (count);
}
