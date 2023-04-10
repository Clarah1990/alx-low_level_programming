#include "main.h"

/**
 * print_binary - a function that prints the binary representation of a number
 * @n: number to print
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int current = n;

	if (current > 1)
		print_binary(current >> 1);

	_putchar((current & 1) + '0');
}
