#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Return: Always 0.
 */
void more_numbers(void)
{
	int i;
	int num1;
	int num2;
	int res;

	i = 0;
	res = 0;
	while (i < 10)
	{
		while (res <= 14)
		{
			if (res < 10)
			{
				num2 = res;
			}
			else
			{
				num1 = res / 10;
				num2 = res % 10;
				_putchar (num1 + '0');
			}
			_putchar (num2 + '0');
			res++
		}
		i++;
		res = 0;
		_putchar ('\n');
	}
}
