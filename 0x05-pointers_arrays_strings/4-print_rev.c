#include "main.h"

/**
 * print_rev - reverse a string
 * @s: String input
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != 0)
		i++;
	while ((i - 1) >= 0)
	{
		_putchar(s[i - 1]);
		i--;
	}
	_putchar('\n');
}
