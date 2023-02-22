#include "main.h"

/**
 * print_times_table - function that prints the n times table, starting with 0
 * @n: number of the times table
 */

void print_times_table(int n)
{
	int i;
	int m;
	int k;

	if (n >= 0 && n <= 15)
	{
		for (i = 0 ; i <= n ; i++)
		{
			for (m = 0 ; m <= n ; m++)
			{
				k = m * i;
				if (m == 0)
				{
					_putchar(k + '0');
				}
				else if (k < 10 && m != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(k + '0');
				}
				else if (k >= 10 && k < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(k / 10 + '0');
					_putchar(k % 10 + '0');
				}
				else if (k >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(k / 100 + '0');
					_putchar(k / 10 % 10 + '0');
					_putchar(k % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
}