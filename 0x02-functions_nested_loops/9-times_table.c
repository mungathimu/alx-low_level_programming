#include "main.h"

/**
 * times_table - function that prints the 9 times table, starting with 0
 *
 * Return: void
 */

void times_table(void)
{
	int m;

	int l;

	for (m = 0 ; m < 10 ; m++)
	{
		l = 9 * m;

		_putchar (l / 10 + '0');
		_putchar (l % 10 + '0');
		_putchar ('\n');

	}

}
