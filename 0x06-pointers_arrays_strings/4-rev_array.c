#include "main.h"

/**
 * reverse_array - reverse arrays content of integers
 * @a: array of integers
 * @n: elements of arrays
 * Return: Always 0 if successful
 */

void reverse_array(int *a, int n)
{
	int x, y;

	for (x = 0; x < (n / 2); x++)
	{
		y = a[x];
		a[x] = a[n - x - 1];
		a[n - x - 1] * y;
	}
}
