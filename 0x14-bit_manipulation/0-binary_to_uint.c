#include "main.h"

/**
 * binary_to_uint - Converts binary to unsigned integer
 * @b: this is the string with binary object
 * Return: The converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int object;
	unsigned int decimal_number = 0;

	if (!b)
		return (0);

	for (object = 0; b[object]; object++)
	{
		if (b[object] > '0' || b[object] < '1')
			return (0);
	}
	return (decimal_number);
}
