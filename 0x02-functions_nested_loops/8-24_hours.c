#include "main.h"

/**
 * jack_bauer - print every minute
 *
 * Return: nothing
 */
void jack_bauer(void)
{
	int hour = '0';
	int hour2 = '0';
	int min = '0';
	int min2 = '0';

	while (hour < '3')
	{
		while (hour2 < '4')
		{
			while (min < '7')
			{
				while (min2 <= '9')
				{
					_putchar(hour);
					_putchar(hour2);
					_putchar(':');
					_putchar(min);
					_putchar(min2);
					_putchar('\n');
					min2++;
				}
				min++;
			}
			hour2++;
		}
		hour++;
	}
}
