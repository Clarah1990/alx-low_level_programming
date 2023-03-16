#include "main.h"
#include <stdlib.h>
/**
 * _calloc - a function that allocates memory for an array, using malloc
 * @nmemb: number of members
 * @size: size of each element
 * Return: pointer to the allocated memory, or NULL if allocation fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int j = 0, k = 0;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	k = nmemb * size;
	p = malloc(k);

	if (p == NULL)
		return (NULL);

	while (j < k)
	{
		p[j] = 0;
		j++;
	}
	return (p);
}
