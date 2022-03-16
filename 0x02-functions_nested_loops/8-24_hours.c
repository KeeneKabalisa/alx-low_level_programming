#include "main.h"

/**
 * jack_bauer - print every minute
 *
 * Return: nothing
 */
void jack_bauer(void)
{
	int hour = 0;
	int hour2 = 0;
	int min = 0;
	int min2 = 0;

	while (hour <= 2)
	{
		if (hour == 2 && hour2 == 4)
			break;
		while (hour2 <= 9)
		{
			while (min <= 5)
			{
				while (min2 <= 9)
				{
					_putchar(hour + '0');
					_putchar(hour2 + '0');
					_putchar(':');
					_putchar(min + '0');
					_putchar(min2 + '0');
					_putchar('\n');
					min2++;
				}
				min2 = 0;
				min++;
			}
			min = 0;
			hour2++;
		}
		hour2 = 0;
		hour++;
	}
}
