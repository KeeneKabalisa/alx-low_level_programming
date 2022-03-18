#include "main.h"
/**
 * _isupper - check letter is upper
 *@c: return of 1 if upper or 0 if not
 * Return: 1 or 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
