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

char *_strncat(char *dest, char *src, int n)
{
	int x = 0;
	int y = 0;

	while (dest[x])
		x++;

	while (y < n && src[y] != 0)
	{
		dest[x] = src[y];
		x++;
		y++;
	}

	dest[x] = 0;

	return (dest);
}
