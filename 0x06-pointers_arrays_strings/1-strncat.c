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
	int slen = 0, count = 0;

	char *tmp = dest, *src_start = src;

	while (*src)
	{
		slen++;
		src++;
	}

	while (*dest)
		dest++;

	if (n > slen)
		n = slen;

	src = src_start;

	for (; count < n; count++)
		*dest++ = *src++;

	*dest = '\0';

	return (tmp);
}
