#include "main.h"
/**
 * _puts_recursion - prints string
 *
 * @s: String input
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (s == '\0')
		_putchar('\n');
	else
		_putchar(s[i] + _puts_recursion(s++);
}
