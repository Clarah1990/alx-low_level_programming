#include <stdio.h>
/**
 * main - Program that prints all possible combinations of 2 2-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 48 ; i < 58 ; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
