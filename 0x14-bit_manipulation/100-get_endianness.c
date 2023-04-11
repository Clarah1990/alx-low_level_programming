#include "main.h"

/**
 * get_endianness - a function that checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *e = (char *)&num;

	if (*e == 1)
		return (1);
	else
		return (0);
}
