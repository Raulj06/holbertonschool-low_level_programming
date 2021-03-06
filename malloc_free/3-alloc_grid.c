#include "main.h"
#include <stdlib.h>

/**
 *alloc_grid - 2 dimensional array
 *@width: test
 *@height: test
 *Return: s
 */

int **alloc_grid(int width, int height)
{

	int i, j, count = 0;
	int **s;

	if (width <= 0)
		return (NULL);
	if (height <= 0)
		return (NULL);

	s = (int **)malloc(height * sizeof(int *));

	if (s == 0)
	{
		free(s);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		s[i] = (int *)malloc(width * sizeof(int));

		if (s[i] == 0)
		{
			for (; i >= 0; i--)
			{
				free(s[i]);
			}
			free(s);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			s[i][j] = count;
	}
	return (s);
}
