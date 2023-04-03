#include "main.h"

/**
 * jack_bauer -  function that prints every minute of the day
 *
 * Return: 0
 */

void jack_bauer(void)
{
	int k;

	int b;

	for (k = 0 ; k < 24 ; k++)
	{
		for (b = 0 ; b < 60 ; b++)
		{
			_putchar(k / 10 + '0');
			_putchar (k % 10 + '0');
			_putchar(':');
			_putchar (b / 10 + '0');
			_putchar(b % 10 + '0');
			_putchar('\n');

		}

	}




}
