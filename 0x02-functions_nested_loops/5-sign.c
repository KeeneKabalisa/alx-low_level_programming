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
		putchar(43);
	}
	else if (n == 0)
	{
		i = 0;
		putchar(48);
	}
	else
	{
		i = -1;
		putchar(45);
	}
	return (i);
}
