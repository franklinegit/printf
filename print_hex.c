#include "main.h"
/**
 * print_hex - prints hexadecimal
 * @num: input
 */

void print_hex(unsigned int num)
{
	int hex_digits[100];
	int i = 0, j;

	while (num != 0)
	{
		hex_digits[i] = num % 16;
		num /= 16;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		if (hex_digits[j] < 10)
		{
			_putchar(hex_digits[j] + '0');
		}
		else
		{
			_putchar(hex_digits[j] - 10 + 'a');
		}
	}
}
