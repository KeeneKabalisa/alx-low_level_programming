#include <stdio.h>
/**
 * main - multiples of 3 & 5
 *
 * Return: 0
 */
int main(void)
{
	int max = 1024;
	int sum = 0;
	int i;

	for (i = 0; i < max; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			sum = sum + i;
	}
	printf("%d", sum);
	return (0);
}
