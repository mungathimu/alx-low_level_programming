#include "main.h"

/**
 * string_toupper - function that changes lower to upper case
 * @str: This is the string that we are changing from lower case to upper case
 * Return: characters or strings
 */

char *string_toupper(char *str)
{
	int b;

	for (b = 0 ; str[b] != '\0' ; b++)
	{
		if (str[b] >= 'a' && str[b] <= 'z')
			str[b] = str[b] - 32;

	}
	return (str);

}
