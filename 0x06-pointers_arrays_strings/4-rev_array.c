include "main.h"

/**
 * reverse_day - function that reverse content of array
 * @a: array
 * @n: number of elements
 *
 * Return: pointer to @dest
 */

void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n - 1; index > n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}

