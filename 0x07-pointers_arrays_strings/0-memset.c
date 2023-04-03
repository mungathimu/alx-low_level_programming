#include "main.h"

/**
 * *_memset - function that fills memory with a constant byte
 * @s: where the byte is stored
 * @b: This is the stored byte
 * @n: Humber of bytes that is to be stored
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int l;

	for (l = 0 ; l < n ; l++)
	{

		s[l] = b;
	}
	return (s);


}
