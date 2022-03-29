#include "main.h"
/**
 * _strchr - locates char in string
 * @s: string input
 * @c: char input
 * Return: the pointer to the first occurrence of the character c
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
