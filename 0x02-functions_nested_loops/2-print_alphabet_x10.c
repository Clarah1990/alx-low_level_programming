#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowerxase
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int i;
	char n;

	for (i = 1 ; i <= 10 ; i++)
	{
		for (n = 'a' ; n <= 'z' ; n++)
			_putchar(n);
		_putchar('\n');
	}
}
