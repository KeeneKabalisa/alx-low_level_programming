#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - putchar alpha
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar(10);
}
