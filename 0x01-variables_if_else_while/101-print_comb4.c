#include <stdio.h>

/**
 * main - prints all possible differents combinations of three digits
 * Return: Always 0
 */

int main(void)
{
	int i;
	int n;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (n = 0; n < 10; n++)
		{
			if (n > i)
			{
				for (j = 0; j < 10; j++)
				{
					if (j > n)
					{
						putchar(i);
						putchar(n);
						putchar(j);
					
						if (i == 7 && n == 8 && j == 9)
							{break; }
						{
							putchar(',');
							putchar(' ');
						}
					}	
				}
			}
		}
	}
	putchar('\n');
	return (0);
}


