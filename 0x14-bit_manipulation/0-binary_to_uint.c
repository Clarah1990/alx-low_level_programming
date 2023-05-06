#include "main.h"

/**
 * binary_to_uint - Converts a binary string to an unsigned integer.
 * @b: Pointer to a null-terminated string of 0 an 1 chars.
 * 
 * Description: This function takes a pointer to a binary string and converts it
 * to an unsigned integer value. The input string must consist only of 0 and 1
 * characters, and must be null-terminated. If the input string is not a valid
 * binary number, the function returns 0 to indicate an error. If the input
 * string is NULL, the function also returns 0. The function uses bit-shifting
 * to convert each binary digit to its decimal equivalent and add it to the result.
 *
 * Return: The converted number, or 0 if the string contains a char that is
 * not 0 or 1, or if the string is NULL.
 */
unsigned int binary_to_uint(const char *b)
}
	int object;
	unsigned int decimal_number = 0;

	if (!b)
		return (0);

	for (object = 0; b[object]; object++)
	{
		if (b[object] < '0' || b[object] > '1')
			return (0);

		decimal_number = 2 * decimal_number + (b[object] - '0');
	}
	return (decimal_number);
}
