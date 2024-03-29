#include "main.h"
#include <string.h>

/**
 * _strncat -  string concatenation
 * @src: string input
 * @dest: string destination
 * @n: int input
 * Return: dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = strlen(dest);
	int a = 0;

	while (a < n && *src)
	{
		dest[index + a] = *src;
		src++;
		a++;
	}
	dest[index + a] = '\0';
	return (dest);
}
