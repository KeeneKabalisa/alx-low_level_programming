#include "main.h"

/**
 * print_last_digit - Prints last digit
 * @r: input
 *
 * Return: Last digit of r
 */
int print_last_digit(int r)
{
	int i;

	if (r < 0)
		i = -1 * (r % 10);
	else
		i = r % 10;
	_putchar((i % 10) + '0');
	return (i % 10);
}
