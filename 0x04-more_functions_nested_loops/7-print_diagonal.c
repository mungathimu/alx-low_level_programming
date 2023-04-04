#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n: number of times \ is to be printed
 * Return: void
 */
void print_diagonal(int n)

{
	int m;

	int l;

	if (n <= 0)
	{
		_putchar ('\n');


	}

	for (l = 0 ; l < n ; l++)
	{
		for (m = 0 ; m < l ; m++)
		{
			_putchar (' ');
		}
		_putchar ('\\');
		_putchar ('\n');

	}


}
