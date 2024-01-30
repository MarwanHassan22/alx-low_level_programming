#include "main.h"

/**
 * alloc_grid - Returns a pointer to a 2-dimensional array of integers. 
 * @width: The sidth  of the grid.
 * @height: The height of the grid.
 *
 * Return: A pointer to the allocated 2D array, or NULL on failure.
 */

int **alloc_grid(int width, int height)
{

	int **grid;
	int i , j;

	/*Check fi width or height is 0 or negative */
	if (width <= 0 || height <= 0)
		return NULL;

	/*Allocate memory for the rows*/
	grid = malloc(height * sizeof(int *));

	/*Check if memory allcation is successful */
	if (grid ==  NULL)
		return NULL;

	/*Allocate memory for each column in the row*/
	for (i = 0; i < height; i++)
	{
	
		grid[i] = malloc(width * sizeof(int));

		/*Check if memory allocation is successful */
		if (grid == NULL)
		{
		
			for(j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
			return NULL;
		}

		/*Initialize each element to 0 */
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return grid;
}

