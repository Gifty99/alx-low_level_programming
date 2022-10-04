#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly-allocated space in memory
 * containing a copy of the string given as parameter
 * @str: Input string
 *
 * Return: NULL if str == NULL or insufficient memory is available
 * otherwise - a pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *duplicate;
	int index, length = 0;

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		length++;

	duplicate = malloc(sizeof(char) * (length + 1));

	if (duplicate == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		duplicate[index] = str[index];

	duplicate[length] = '\0';

	return (duplicate);
}
