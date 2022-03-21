#include "main.h"

/**
 * print_rev - reverse a string
 * @s: String input
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int i = _strlen(s);

	while (i != 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
