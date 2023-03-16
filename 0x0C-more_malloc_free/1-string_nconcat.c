#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - a function that concatenates two strings
 * @s1: 1st string
 * @s2: 2nd string
 * @n: maximum number of bytes of s2
 * Return: a pointer to the string or NULL if allocation fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int j = 0, k = 0, l = 0, m = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	while (s1[j])
		j++;

	if (s2 == NULL)
		s2 = "";

	while (s2[k])
		k++;

	if (n >= l)
		m = j + l;
	else
		m = j + n;

	str = malloc(sizeof(char) * m + 1);
	if (str == NULL)
		return (NULL);

	l = 0;
	while (k < m)
	{
		if (k <= j)
			str[k] = s1[k];
		if (k >= j)
		{
			str[k] = s2[l];
			l++;
		}
		k++;
	}
	str[k] = '\0';
	return (str);
}
