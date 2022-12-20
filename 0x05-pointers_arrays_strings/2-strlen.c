#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: this is the input string
 * Return: Length of the string
 */

int _strlen(char *s)
{
	int index;

	index = 0;
	while (*s != '\0')
	{
		index++;
		s++;
	}
	return (index);
}

