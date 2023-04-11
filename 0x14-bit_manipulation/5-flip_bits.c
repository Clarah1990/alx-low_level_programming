#include "main.h"

/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another
 * @n: 1st number
 * @m: 2nd number
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int change = n ^ m;
	unsigned int count = 0;

	while (change != 0)
	{
		count++;
	change &= change - 1;
	}
	return (count);
}
