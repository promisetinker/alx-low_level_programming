#include "main.h"

/**
 * print_sign - will print sign
 *
 * @n: represents parameter
 *
 * Return: 1, o and -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		_putchar(',');
                _putchar(' ');
                return (0);
	}
	else
	{
		_putchar('_');
		_putchar(',');
                _putchar(' ');
                return (-1);
	}
}


