#include "main.h"

/**
 * free_grid - Frees a 2-dimensional grid created by alloc_grid function.
 * @grid: The 2D array to be freed.
 * @height: The height of the grid.
 */
void free_grid(int **grid, int height)
{
    int i;

    if (grid == NULL || height <= 0)
        return;

    /* Free each row in the grid */
    for (i = 0; i < height; i++)
    {
        free(grid[i]);
    }

    /* Free the array of pointers */
    free(grid);
}

