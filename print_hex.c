#include "main.h"

/**
 * print_hex - prints hexadecimal
 * @h: input
 * @uppercase: input
 * Return: count
 */

int print_hex(unsigned int h, int uppercase)
{
	const char *digits = uppercase ? "0123456789ABCDEF" : "0123456789abcdef";
	int count = 0;

	if (h >= 16)
		count += print_hex(h / 16, uppercase);
	_putchar(digits[h % 16]);
	++count;
	return (count);
}
