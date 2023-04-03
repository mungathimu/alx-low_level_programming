#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number
 *
 * @l: function parameter
 * Return: g
 */


int print_last_digit(int l)
{
	int g;

	g = l % 10;

	if (l < 0)
		g = -(g);
	_putchar(g + '0');
	return (g);
}
