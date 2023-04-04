#include "main.h"

/**
 * more_numbers - function that prints 0 to 14 10 times
 * Return: void
 */
void more_numbers(void)
{

	int l;

	int j;

	for (l = 0 ; l < 10 ; l++)
	{
		for (j = 0 ; j <= 14 ; j++)
		{
			if (j > 9)
			{

				_putchar ((j / 10) + '0');


			}
			_putchar ((j % 10) + '0');
		}
		_putchar ('\n');
	}


}
