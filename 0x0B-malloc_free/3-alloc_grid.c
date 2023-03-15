#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid -  returns a pointer to a
 * 2 dimensional array of integers.
 * @width: width of array.
 * @height: height of array.
 *
 * Return: pointer to array.
 */
int **alloc_grid(int width, int height)
{
	int **p = (int **)malloc(height * 4);
	int k;
	int i = 0;
	int j;

	if (width < 1 || height < 1 || !(int **)malloc(width * height * 4))
		return (NULL);
	for (k = 0; k < height; k++)
		p[k] = (int *)malloc(width * 4);
	while (i < height)
	{
		j = 0;
		while (j < width)
		{
			p[i][j] = 0;
			j++;
		}
		i++;
	}
	return (p);
}
