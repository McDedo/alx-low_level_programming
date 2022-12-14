#include "main.h"

/**
 * is_lower - checks if a character is lowercase
 * @c: the character
 * Return: 1 if letter is lowercase, 0 if not
 */

int print_islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

}


