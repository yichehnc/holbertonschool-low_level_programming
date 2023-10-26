#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer.
 *
 * Return: Always 0.
 */
void jack_bauer(void)
{
	int hrs = 0;
	int mins = 0;

	while (hrs <= 23)
	{
		while (mins <= 59)
		{
			_putchar(hrs / 10 + '0');
			_putchar(hrs % 10 + '0');
			_putchar(':');
			_putchar(mins / 10 + '0');
			_putchar(mins % 10 + '0');
			mins = mins + 1
			_putchar('\n');
		}
		hrs = hrs + 1;
		mins = 0;
	}
}
