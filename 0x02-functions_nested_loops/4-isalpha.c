#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character
 *
 * @c: This what is to be printed
 * Return: 1 if c is a letter, lowercase or uppercase if otherwise 0
 */

int _isalpha(int c)

{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}


















