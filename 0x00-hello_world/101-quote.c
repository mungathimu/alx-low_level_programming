#include <stdio.h>
#include <unistd.h>

/**
 * main - prints main function
 *
 * it should be followed or have a newline
 *Return: It should always be 1
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
