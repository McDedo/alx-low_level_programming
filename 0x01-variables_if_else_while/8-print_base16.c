#include <stdio.h>

/**
 * main - prints the numbers in base 16
 * Return: Always 0
 */

int main(void)
{
	int num;

	char la;

	num = 0;
	la = 'a';
	while
		(num < 10)
			{putchar(num + '0');
			num++; }
	while
		(la <= 'f')
			{putchar(la);
			la++; }
	putchar('\n');
	return (0);
}

