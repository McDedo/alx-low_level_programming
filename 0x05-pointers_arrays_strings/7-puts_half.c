#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: this is the input string
 * Return: void
 */

void puts_half(char *str)
{
	int index, half;

	index = 0;
	while (str[index] != '\0')
		index++;
	half = index / 2;
	if (index % 2 == 1)
		half++;
<<<<<<< HEAD
	while half < index
=======
	while (half < index)
>>>>>>> 3de871bdee5a95c00b3cd53ee640ac64726249bf
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');

}

