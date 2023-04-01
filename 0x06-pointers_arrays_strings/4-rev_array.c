#include "main.h"

/**
 * reverse_array - Function to reverse string
 * @a: integer
 * @n: integer
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int i;

	int m;

	for (i = 0 ; i <  n / 2 ; i++)
	{
		m = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = m;



	}







}
