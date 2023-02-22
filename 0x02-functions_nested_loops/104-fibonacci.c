#include <stdio.h>
/**
 * main - program that finds and prints the first 98 Fibonacci numbers
 * starting with 1 and 2
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int a, b, c;
	int i;

	a = 0;
	b = 1;
	c = 1;

	for (i = 0 ; i < 98 ; i++)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%lu", c);
	}
	if (i != 97)
	{
		printf(",");
	}
	printf("\n");
	return (0);
}

