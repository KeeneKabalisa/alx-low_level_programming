
#include <stdio.h>

/**
 * main - Print alpha
 *
 * Return: 0
 */
int main(void)
{
	int i = 0;

	while (i < 26)
	{
		putchar(i + 97);
		i++;
	}
	printf("\n");
	return (0);
}
