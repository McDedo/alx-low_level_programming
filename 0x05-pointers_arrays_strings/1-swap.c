#include "main.h"

/**
 * swap_int – swaps the values of two integers
 * @a: this is the first entry
 * @b: this is the second entry
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int changed;

	changed = *a;
	*a = *b;
	*b = changed;
}

