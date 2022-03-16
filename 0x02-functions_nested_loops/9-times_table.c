#include "main.h"

/**
 * times_table - Prints nine times table
 *
 * Return: nothing
 */
void times_table(void)
{
	int fir, sec, num;

	for (fir = 0; fir <= 9; fir++)
	{
		for (sec = 0; sec <= 9; sec++)
		{
			num = fir * sec;

			if ((num / 10) == 0)
			{
				if (sec != 0)
					_putchar(' ');
				_putchar(num + '0');
				if (sec == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((num / 10) + '0');
				_putchar((num % 10) + '0');
				if (sec == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
