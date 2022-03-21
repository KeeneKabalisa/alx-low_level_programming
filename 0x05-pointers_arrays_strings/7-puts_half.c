#include "main.h"

/**
 * puts_half - print half a string
 *
 * @str: string input
 *
 * Return: nothing
 */
void puts_half(char *str)
{
	int i = 0;
	int j;

	while (str[i] != '\0')
		i++;
	if (i % 2 == 0)
	{
		for (j = i / 2; str[j] != 0;  j++)
			_putchar (str[j]);
	}
	else
	{
		for (j = (i - 1) / 2; j < i - 1; j++)
			_putchar (str[j + 1]);
	}
	_putchar ('\n');
}
