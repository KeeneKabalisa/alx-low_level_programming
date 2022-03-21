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
	int i = 0;
	int j = 0;

	while (s[i] != 0)
		i++;
	char c[i];

	while ((i - 1) >= 0)
	{
		c[j] = s[i - 1];
		j++;
		i--;
	}
	strcpy(s, c);
}
