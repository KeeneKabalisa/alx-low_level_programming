#include "main.h"
#include <stdio.h>

/**
 * _islower - finds out if char is lowercase
 * @c: input 
 *
 * Return: 1 if lower, 0 if upper
 */

int _islower(int c)
{
	char ch;
	int i = 0;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == c)
		       i = 1;
	}
	return (i);
}
