#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 * @array: array
 * @size: the number of elements in the array array
 * @cmp: a pointer to the function to be used to compare values
 * Return: If no element matches and size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);
				i++;
			}
		}
	}
	return (-1);
}
