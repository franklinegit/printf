#include "main.h"
int _printf(const char *format, ...)
{
	int i, d, num = 0, len = 0;
	char c, *s;
	va_list mylist;
	va_start(mylist, format);
	/* run as long as the formart is not NULL */
	while (*format != '\0')
	{
		/* check the first character is a % before the specifiers  */
		if (*format == '%')
		{
			/* if its a % increment to next character */
			format++;
			/* check if th next character is a % */
			if (*format == '%')
			{
				printf("%%");
				num++;
			}
			/* check if the nect character is char */
			else if(*format == 'c')
			{
				c = (char)(va_arg(mylist, int));
				printf("%c", c);
				num++;
			}
			/* checks if the next character is an integer */
			else if (*format == 'i')
			{
				i = (int)va_arg(mylist, int);
				printf("%d", i);
				num++;
			}
			/* check decimal specifier */
			else if (*format == 'd')
			{
				d = (int)va_arg(mylist, int);
				printf("%d", d);
				num++;
			}
			/* checks if the next character is a string */
			else if (*format == 's')
			{
				s = va_arg(mylist, char*);
				while (s != NULL && s[len] != '\0')
					len++;
				printf("%s", s);
				num += len;
			}
		}
		/* if its not a formart specifier print the characters */
		else
		{
			printf("%c", *format);
			num++;
		}
		format++;
	}
	va_end(mylist);
	return(num);
}

