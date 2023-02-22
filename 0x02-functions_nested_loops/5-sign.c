#include "main.h"

/**
 * print_sign - Function that prints the sign of a number
 * @n: parameter sign of a number
 *
 * Return: 1 if n is greater than 0
 * and 0 if n is 0
 * and if n is less than 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		return (0);
	}
	else
	{
		_putchar('-');
		_putchar(',');
		_putchar(' ');
		return (-1);
	}
}
