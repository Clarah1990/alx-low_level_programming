#include "main.h"

/**
 * int flip_bits - Returns the number of bits you would need 
 * to flip to get from one number to another.
 * @n: 1st number
 * @m: 2nd number
 *
 * Return: Number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, cnt = 0;
	unsigned long int currt;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
	currt = exclusive >> i;
	if (currt & 1)
	cnt++;
	}
	return (cnt);
}
