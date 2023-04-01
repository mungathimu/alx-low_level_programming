#include "main.h"

/**
 * *_strncpy - Fuction that copies strings
 * @dest : This is the destination of the string
 * @src: THis is the source of the string
 * @n: This is the number of strings
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int l;



	for (l = 0 ; l < n ; l++)
		dest[l] = src[l];
	return (dest);
























}
