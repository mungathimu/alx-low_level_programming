#include "main.h"

/**
 * *_memcpy - function that copies memory area
 *
 * @dest: destination to be copied to
 * @src: source to be copied from
 * @n: number of bytes
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int p;

	for (p = 0 ; p < n; p++)
	{
		dest[p] = src[p];

	}

	return (dest);


}
