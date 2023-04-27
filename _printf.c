#include "main.h"
/**
 * _printf - prints formatted output
 * @format: format string of specifiers
 * Return: count
 */

int _printf(const char *format, ...)
{
	va_list args;
	int c, n, count = 0;
	unsigned int u, o, h, b;
	const char *s, *p = format;

	va_start(args, format);
	while (*p)
	{
		if (*p == '%')
		{
			++p;
			if (*p == '\0')
				break;
			if (*p == '%')
			{
				_putchar('%');
				count++;
			}
			else if (*p == 'c')
			{
				c = va_arg(args, int);
				_putchar(c);
				count++;
			}
			else if (*p == 's')
			{
				s = va_arg(args, const char *);
				if (s == NULL)
					s = "(null)";
				while (*s != '\0')
				{
					_putchar(*s++);
					count++;
				}
			}
			else if (*p == 'd' || *p == 'i')
			{
				n = va_arg(args, int);
				count += print_int(n);
			}
			else if (*p == 'u')
			{
				u = va_arg(args, unsigned int);
				count += print_unsigned_int(u);
			}
			else if (*p == 'o')
			{
				o = va_arg(args, unsigned int);
				count += print_octal(o);
			}
			else if (*p == 'x' || *p == 'X')
			{
				h = va_arg(args, unsigned int);
				count += print_hex(h, *p == 'X');
			}
			else if (*p == 'b')
			{
				b = va_arg(args, unsigned int);
				count += print_binary(b);
			}
			else
			{
				_putchar('%');
				_putchar(*p);
				count += 2;
			}
		}
		else
		{
			_putchar(*p);
			++count;
		}
		++p;
	}
	va_end(args);
	return (count);
}
