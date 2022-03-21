#include "main.h"
#include <string.h>

/**
 * rev_string - Reverses a string
 *
 * @s: input string
 * Return: nothing
 */
void rev_string(char *s)
{
	char c;
	int i, j = 0, k = 0;

	while (s[j] != 0)
	{
		j++;
	}

	k = j - 1;

	for (i = 0; i < j / 2; i++)
	{
		c = s[i];
		s[i] = s[k];
		s[k--] = c;
	}
}
