#include <stdio.h>

/**
 * main - Entry Point
 * Return: Always 0 (Success)
 */

int main(void)
{
	printf("Size of a char: %lu bite(s)\n", sizeof(char));
	printf("Size of an int: %lu bite(s)\n", sizeof(int));
	printf("Size of a long int: %lu bite(s)\n", sizeof(long int));
	printf("Size of a long long int: %lu bite(s)\n", sizeof(long long int));
	printf("Size of a float: %lu bite(s)\n", sizeof(float));
	return (0);
}

