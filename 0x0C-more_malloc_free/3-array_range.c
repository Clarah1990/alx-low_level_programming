#include "main.h"
#include <stdlib.h>
/**
 * array_range - a function that creates an array of integers
 * @min: minimum integer value to include in the array
 * @max: maximum integer value to include in the array
 * Return: On success, a pointer to the newly created array
 * If min > max or malloc fails, returns NULL
 */
int *array_range(int min, int max)
{
	int  *arr, i = 0;

	if (min > max)
		return (NULL);

	arr = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (arr == NULL)
		return (NULL);

	while (min <= max)
	{
		arr[i] = min;
		i++;
		min++;
	}
	return (arr);
}
