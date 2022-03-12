#include <stdio.h>

/**
 * main - Both case alpha
 *
 * Return: 0
 */
int main(void)
{
	int i;

	while (i < 26)
	{
		putchar(i + 97);
		i++;
	}

	i = 0;

	while (i < 26)
	{
		putchar(i + 65);
		i++;
	}
	printf("\n");
	return (0);
}
