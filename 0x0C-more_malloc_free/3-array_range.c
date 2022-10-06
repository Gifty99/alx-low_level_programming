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
	int *new_array;
	int i;

	if (min > max)
		return (NULL);

	new_array = malloc((max - min + 1) * sizeof(int));

	if (new_array == NULL)
		return (NULL);

	for (i = 0; i <= (max - min); i++)
		new_array[i] = min++;

	return (new_array);
}
