#include "main.h"

/**
 * _strcmp - This is a funtion that compares strings
 * @s1: This is the first string
 * @s2: This is the second string
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	int v;

	for (v = 0 ; s1[v] != '\0' || s2[v] != '\0'; v++)
	{
		if (s1[v] != s2[v])
		{
			if (s1[v] < s2[v])
				return (s1[v] - s2[v]);
			else if
				(s1[v] > s2[v])
					return (s1[v] - s2[v]);


		}
		else
			return (0);
	}

	return (0);















}
