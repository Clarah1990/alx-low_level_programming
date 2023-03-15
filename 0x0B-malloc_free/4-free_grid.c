#include "main.h"
#include <stdlib.h>
/**
 * free_grid -  frees a 2 dimensional grid previously created
 * by your alloc_grid function
 * @grid: pointer to the grid that should be freed
 * @height: heigght of the grid
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int j;

	if (grid == NULL)
		return;

	for (j = 0 ; j < height ; j++)
	{
		free(grid[j]);
	}
	free(grid);
}
