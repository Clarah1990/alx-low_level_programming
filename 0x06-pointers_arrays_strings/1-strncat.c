#include "main.h"
/**
 * _strncat - function that concatenates two strings
 * @dest: input value
 * @src: input value
 * @n: input value
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int m;
	int k;

	m = 0;
	while (dest[m] != '\0';
	{
		m++;
	}
	k = 0;
	while (k < n && src[k] != '\0')
	{
		dest[m] = src[k];
		m++;
		k++;
	}
	dest[m] = '\0';
	return (dest);

}
