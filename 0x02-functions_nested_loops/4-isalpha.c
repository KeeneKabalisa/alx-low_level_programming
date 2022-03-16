#include "main.h"
#include <stdio.h>

/**
 * _isalpha - checks for alpha char
 *@c: input
 *
 * Return: 1 if letter, 0 if else
 */
int _isalpha(int c)
{
	int let = 0;
	char lo, hi;
	
	for (lo = 'a'; lo <= 'z'; lo++)
	{
		for (hi = 'A'; hi <= 'Z'; hi++)
		{
			if (c == hi || c == lo)
				let = 1;
		}
	}
	return (let);
}
