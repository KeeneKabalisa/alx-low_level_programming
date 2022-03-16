#include "main.h"
#include <stdio.h>

/**
 * print_sign: print sign of number
 * @n: input
 *
 * Return: 1 if n is > 0, 0 if n is zero and -1 if n < 0
 */

int print_sign(int n)
{
	int i;

	if (n > 0)
	{
		i = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		i = 0;
		_putchar('0');
	}
	else
	{
		i = -1;
		_putchar('-');
	}
	return (i);
}
