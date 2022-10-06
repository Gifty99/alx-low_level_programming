#include "main.h"
#include <stdlib.h>

/**
 * array_range - A function that creates an array of integers
 * @min: min number to start
 * @max: max number to start
 * Return: pointer to the newly created array, otherwise
 * NULL if min>max or malloc fails
 */

int *array_range(int min, int max)
{
	int *newarray, i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	newarray = malloc(sizeof(int) * size);

	if (newarray == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		newarray[i] = min++;

	return (newarray);
}
