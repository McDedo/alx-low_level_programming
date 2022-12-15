#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14
 * Return: 0 to 9 except 2 and 4
 */

void more_numbers(void)
{
	int i, ro;

	for (ro = 0; ro <= 9; ro++)
	{
		for (i = 0; i <= 9; i++)
		{
			if (i > 9)
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}

}


