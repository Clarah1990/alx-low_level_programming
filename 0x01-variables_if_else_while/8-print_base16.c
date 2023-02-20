#include <stdio.h>
/**
 * main - Program that prints all numbers of base 16 in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char n;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	for (n = 'a' ; n <= 'f' ; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
