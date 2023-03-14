#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of size size and assign char
 * @size: size of the array to be created
 * @c: character to initialize the array with
 * Return: On success, a pointer to an array, otherwise NULL
 */
char *create_array(unsigned int size, char c)
{
	char *array = malloc(size);

	if (size == 0)
		return (NULL);

	if (array == NULL)
		return (NULL);

	while (size--)
		array[size] = c;
	return (array);
}
