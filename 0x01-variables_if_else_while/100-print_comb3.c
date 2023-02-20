#include <stdio.h>
/**
 * main - Program that prints all possible different combinations of 2 digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int n;

	for (i = 0 ; i < 10 ; i++)
	{
		for (n = 1 ; n < 10 ; n++)
		{
			if (i < n && i != n)
			{
				putchar(i + '0');
				putchar(n + '0');
				if (i + n != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
