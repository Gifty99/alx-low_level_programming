#include "main.h"

/**
 * _strncpy - A function that copies a string
 * @dest: input string
 * @src: another input string
 * @n: input integer
 *
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int m;

	for (m = 0; m < n && src[m] != '\0'; m++)
		dest[m] = src[m];

	for ( ; m < n; m++)
		dest[m] = '\0';

	return (dest);
}
