#include "main.h"

#include <stddef.h>

/**
 * *_strchr - locates string
 *
 * @s: This is the pointer to the string
 * @c: Character to be located
 * Return: c in s, or NULL if the character is not found
 */


char *_strchr(char *s, char c)
{
	int h;

	for (h = 0 ; s[h] != '\0' ; h++)
	{
		if (s[h] == c)
			return (s + h);


	}
	return (NULL);



}
