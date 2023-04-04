#include "main.h"

/**
 * print_triangle - function that prints a triangle, followed by a new line
 * @size:  is the size of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	int p;

	int j;

	if (size <= 0)
	{
		_putchar ('\n');

	}
	for (p = 1 ; p <= size ; p++)
	{
		for (j = 1 ; j <= size - p ; j++)
			_putchar (' ');
		for (j = 1 ; j<= size ; j++)
			_putchar ('#');

		_putchar ('\n');
	}
}
