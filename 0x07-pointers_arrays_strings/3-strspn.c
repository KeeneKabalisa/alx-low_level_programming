#include "main.h"
/**
 * _strspn - gets length of prefix substring
 * @s: initial segment
 * @accept: accepted bytes
 * Return: the number of accepted bytes
 */
char *_strchr(char *s, char accept)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
		if (s[i] == accept)
		{
			return (s + i);
		}
	}
	return (0);
}
