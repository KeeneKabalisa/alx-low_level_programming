#include "main.h"
/**
 * _strlen_recursion - gets string length
 *
 * @s: String input
 * Returns; Str len int
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
