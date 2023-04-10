#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a given index
 * @n: the number to search
 * @index: the index of the bit
 * Return:the value of the bit at index index
 * otherwise -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int value = n;

	if (index >= sizeof(value) * 8)
		return (-1);

	return ((value & (1 << index)) >> index);
}
