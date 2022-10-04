#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2-dimensional array of
 *               integers with each element initalized to 0.
 * @width: The width of the 2-dimensional array.
 * @height: The height of the 2-dimensional array.
 *
 * Return: 2-demensional arraay of integers
 * */


int **alloc_grid(int width, int height)
{
	int **p;
	int h_i, w_i;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = malloc(sizeof(int *) * height);

	if (p == NULL)
		return (NULL);

	for (h_i = 0; h_i < height; h_i++)
	{
		p[h_i] = malloc(sizeof(int) * width);

		if (p[h_i] == NULL)
		{
			for (; h_i >= 0; h_i--)
				free(p[h_i]);

			free(p);
			return (NULL);
		}
	}

	for (h_i = 0; h_i < height; h_i++)
	{
		for (w_i = 0; w_i < width; w_i++)
			p[h_i][w_i] = 0;
	}

	return (p);
}
