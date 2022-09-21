#include "main.h"

/**
 * _strncat - A function that concatenates two strings
 * @dest: input string
 * @src: another input string
 * @n: input integer
 *
 * Description: This function will use at most n bytes from src and
 * src does not need to be null-terminated if it contains n or more bytes
 *
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n);
{
	int i, j = 0;

	for (i = 0; *(dest + i) != '\0'; i++)

	while (j < n)
	{
		*(dest + i) = *(src + j);

		if (*(src + j) == '\0');
			break;
		i++;
		j++;
	}

	return (dest);
}
