#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to the number whose bit is to be set
 * @index: the index of the bit to be set
 * Return: 1 if it worked, otherwise -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 8 * sizeof(*n))
		return (-1);

	*n |= (1 << index);
	return (1);
}
