#include "main.h"
/**
  * _binary -  takes num and return it in binary format
  * @num: input that will be converted to binary
  * Return: void
  */
void _binary(unsigned int num)
{
	int binary[32];
	int len = 0;

	if (num == 0)
	{
		_putchar('0');
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
		}
	}
}

