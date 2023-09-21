#include "main.h"

/**
 * print_number - a function print a number.
 * @n: the number
 *
 */

int print_number(int n)
{
	unsigned int i, l = 0;

	if (n < 0)
	{
		i = -n;
		_putchar('-');
		l++;
	}
	else
	{
		i = n;
	}

	if (i / 10)
	{
		l++;
		print_number(i / 10);
	}

	_putchar((i % 10) + '0');
	l++;
	return (l);
}
