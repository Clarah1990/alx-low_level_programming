#include <stdio.h>

/**
 * main - Program that prints in lowercase & uppercase, followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	for (i = 'A' ; i <= 'Z' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
