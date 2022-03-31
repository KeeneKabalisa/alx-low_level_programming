#include "main.h"
/**
 * _strlen_recursion - gets string length
 *
 * @s: String input
 * Returns; Str len int
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
		return(i);
	else
	{
		i++;
		_strlen_recursion(s + i);
		return(i);
	}
}
