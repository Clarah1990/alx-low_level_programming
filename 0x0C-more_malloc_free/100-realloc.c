#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with malloc
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes, of the new memory block
 *
 * Return: On success, a pointer to the newly allocated memory block
 * If new_size is zero and ptr is not NULL, returns NULL
 * If malloc fails, returns NULL
 * Otherwise, returns a pointer to the reallocated memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);

		if (new_ptr == NULL)
			return (NULL);

		return (new_ptr);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}
	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);
	for (i = 0 ; i < old_size && i < new_size ; i++)
	{
		new_ptr[i] = ((char *) ptr)[i];
	}
	free(ptr);
		return (new_ptr);
}
