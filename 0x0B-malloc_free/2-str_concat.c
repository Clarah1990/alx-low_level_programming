#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - a function that concatenates two strings
 * @s1: 1st string
 * @s2: 2nd string
 * Return: On success, a pointer to the string and NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int j = 0, k = 0, l = 0, m = 0;
	char *p;

	if (s1 == NULL)
		s1 = "";
	while (s1[j])
		j++;

	if (s2 == NULL)
		s2 = "";
	while (s2[k])
		k++;

	m = j + k;
	p = malloc((sizeof(char) * m) + 1);

	if (p == NULL)
		return (NULL);

	k = 0;
	while (l < m)
	{
		if (l <= j)
			p[l] = s1[l];

		if (l >= j)
		{
			p[l] = s2[k];
			k++;
		}
		l++;
	}

	p[l] = '\0';
	return (p);
}
