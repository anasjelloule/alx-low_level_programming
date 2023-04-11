#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *  free_grid - rfrees a 2 dimensional grid previously
 * @grid: contains the contents
 * @height: contains the contents
 * Return: NULL or array of integers
 */
void free_grid(int **grid, int height)
{
int h = 0;
if (height <= 0)
return;
if (grid == NULL)
return;
while (h < height)
{
free(grid[h]);
h++;
}
free(grid);
}
