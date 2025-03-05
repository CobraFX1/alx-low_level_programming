#include "main.h" 

/**
 * free_grid - frees the memory allocated to a 2D array
 * @**grid: the array 
 * @height: the height of the array
 *
 * Return: 0(Success)
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
