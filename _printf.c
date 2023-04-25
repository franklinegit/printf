#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * _printf - prints input
 * @format: input
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	int d, len = 0, ncp = 0;
	unsigned int o, u, x, X;
	char c;
	va_list args;
	char str[10];

	va_start(args, format);
	if (format)
	{
		while ((c = *format++) != '\0')
		{
			if (c == '%')
			{
				switch (*format++)
				{
					case 'c':
						{
						char arg = va_arg(args, int);

							_putchar(arg);
							ncp++;
							break;
						}
					case 's':
						{
							char *arg = va_arg(args, char *);
							char *ptr = arg;

							while (*ptr != '\0')
							{
								len++;
								sprintf(str, "%d", len);
								ptr++;
							}
							while (*arg != '\0')
							{
								_putchar(*arg++);
								ncp++;
							}
							break;
						}
					case '%':
						{
							_putchar('%');
							ncp++;
							break;
						}
					case 'd':
					case 'i':
						{
							d = va_arg(args, int);
							print_int(d);
							break;
						}
					case 'u':
						{
							u = va_arg(args, int);
							print_unsigned_decimal(u);
							break;
						}
					case 'o':
						{
							o = va_arg(args, int);
							print_octal(o);
							break;
						}
					case 'x':
						{
							x = va_arg(args, int);
							print_hex(x);
							break;
						}
					case 'X':
						{
							X = va_arg(args, int);
							printHex(X);
							break;
						}
				}
			}
			else
			{
				_putchar(c);
				ncp++;
			}
		}
	}
	va_end(args);
	return (ncp);
}
