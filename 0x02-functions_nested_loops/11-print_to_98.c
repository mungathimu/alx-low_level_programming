#include "main.h"

#include <stdio.h>
/**
 * print_to_98 - function that prints all natural numbers
 *
 * @n: function
 * Return: void
 */

void print_to_98(int n)
{
	int j;

	if (n > 0 &&n <= 98)
	{
		for (j = n ; j <= 98 ; j++)
		{
			printf("%d, ", j);
		}
		printf("\n");
	}
	else if (n < 0)
	{
		for (j = n ; j <= 98 ; j++)
		{
			printf("%d, ", j);
		}
		printf("\n");
	}
	else if (n > 98)
	{
		for (j = n ; j >= 98 ; j--)
		{
			printf("%d, ", j);

		}
		printf("\n");
	}
	else if (n == 98)
	{
		printf("%d, ", n);
	}
}
