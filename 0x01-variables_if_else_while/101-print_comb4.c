#include <stdio.h>
/**
 * main - Program that prints all possible different combinations of 3 digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int n;
	int m;

	for (i = 1 ; i < 10 ; i++)
	{
		for (n = 1 ; n < 10 ; n++)
		{
			for (m = 1 ; m < 10 ; m++)
			{
				if (i < n && n < m)
				{
					putchar(i + '0');
					putchar(n + '0');
					putchar(m + '0');
					if (i + n + m != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
