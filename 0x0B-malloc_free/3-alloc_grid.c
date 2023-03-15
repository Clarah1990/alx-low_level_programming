#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of the array
 * @height: height of the array
 * Return: On success, a pointer to the allocated grid and NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int j, k, l, m;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	for (j = 0 ; j < height ; j++)
	{
		grid[j] = malloc(sizeof(int) * width);

		if (grid[j] == NULL)
		{
			for (k = j ; k >= 0 ; k--)
			{
				free(grid[k]);
			}
			free(grid);
			return (NULL);
		}
	}
	for (l = 0 ; l < height ; l++)
	{
		for (m = 0 ; m < width ; m++)
		{
			grid[l][m] = 0;
		}
	}
	return (grid);
}
