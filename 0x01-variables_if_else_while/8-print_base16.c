#include <stdio.h>

/**
 * main - Base16
 *
 * Return: 0
 */
int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
	}
	i = 97;	
	while (i < 103)
	{
		putchar(i);
		i++;
	}
	putchar(10);
	return (0);
}
