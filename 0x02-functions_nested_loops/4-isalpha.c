#include "main.h"

/**
 * _isalpha - Function that checks alphabetic character
 * @c: psrsmeter to be checked
 *
 * Return: 1 if c is a letter
 * and 0 if otherwise
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
