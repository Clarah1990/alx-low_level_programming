#include "main.h"

/**
 * binary_to_uint - Converts a binary string to an unsigned integer.
 * @b: Pointer to a null-terminated string of 0 an 1 chars.
 *
 * Return: The converted number, or 0 if the string contains a char that is
 * not 0 or 1, or if the string is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal_number = 0;
	unsigned int i;

	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] > '1' || b[i] < '0')
			return (0);
	}
	return (decimal_number);
}
