#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - ten alphabet
 *
 */

void print_alphabet_x10(void)
{
	char ch = 'a';
	int i = 0;

	while (i < 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			putchar(ch);
			putchar(10);
		}
		i++;
	}
}
