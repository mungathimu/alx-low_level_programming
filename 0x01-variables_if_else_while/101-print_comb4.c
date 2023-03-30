#include <stdio.h>

/**
 * main - This is where my code will be
 * Return: 0
 */
int main(void)
{
	int j;

	int n;

	int p;

	for (j = 0 ; j < 10 ; j++)
	{
		for (n = 0 ; n < 10 ; n++)
		{
			for (p = 0 ; p < 10 ; p++)
			{
				if (j < n && n < p)
				{
					putchar(j + '0');
					putchar(n + '0');
					putchar(p + '0');
					if (j + n + p != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}



			}


		}

	}
	putchar('\n');
	return (0);

}









