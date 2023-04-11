#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *  alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: contains the contents
 * @height: contains the contents
 * Return: NULL or array of integers
 */
int **alloc_grid(int width, int height)
{
int **grid;
int w, h;
if (width <= 0 || height <= 0)
return (NULL);
grid = (int **)malloc(sizeof(int) * height);
if (grid == NULL)
return (NULL);
h = 0;
while (h < height)
{
grid[h] = (int *)malloc(sizeof(int) * width);
if (grid[h] == NULL)
{
for (w = 0; w < h; w++)
free(grid[w]);
free(grid);
}
h++;
}
for (h = 0; h < height; h++)
for (w = 0; w < width; w++)
grid[h][w] = 0;
return (grid);
}
