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
	int **p = (int **)malloc(height * sizeof(int **));
	int k;
	int i = 0;
	int j;

	if (width < 1 || height < 1)
		return (NULL);
	for (k = 0; k < height; k++)
	{
		p[k] = (int *)malloc(width * sizeof(int *));
		if (!p[k])
		{
			for (k = 0; k < height; k++)
				free(p[k]);
			free(p);
			return (NULL);
		}
	}
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
