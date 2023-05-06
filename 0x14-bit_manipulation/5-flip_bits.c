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
	unsigned int diff_bits = 0;
	unsigned long int difference;

	difference = n ^ m;

	do {
		diff_bits += (difference & 1);
		difference >>= 1;
	} while
		(difference > 0);

	return (diff_bits);
}
