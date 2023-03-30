#include <stdio.h>

/**
 * main - This is the code will be
 * Return: 0
 */
int main(void)
{
	int g;

	int m;

	for (g = 0 ; g < 10 ; g++)
	{
		for (m = 1 ; m < 10 ; m++)
		{
			if (g < m && g != m)
			{
				putchar(g + '0');
				putchar(m + '0');

				if (g + m != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}

		}

	}
	putchar('\n');
	return (0);
}



