#include "main.h"

/**
 * _strcat - A function that concatenates two strings.
 * @dest: input string
 * @src: another input string
 *
 * Description: This function appends the src string to
 * the dest string, overwriting the terminating null byte (\0)
 * at the end of dest, and then adds a terminating null byte
 *
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	char *tmp = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';

	return (tmp);
}
