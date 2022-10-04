#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* free_grid - it writes a function that frees a 2 dimensional grid
* @grid: grid value
* @height: height value
*
* Return: return grid
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
