#include "main.h"

/**
  * print_square - function that prints a square, followed by a new line
  * @size: is the size of the square
  * Return: 0
  */


void print_square(int size)
{
		int y;

		int f;

		if (size <= 0)
		{

		_putchar ('\n');

		}
			for (y = 0 ; y < size ; y++)
			{
				for (f = 0 ; f < size ; f++)
				{
					_putchar ('#');
				}
				_putchar ('\n');
			}

}
