#include "main.h"

/**
 * _strcpy - a function that copies the string pointed to
 * including the terminating null byte (\0), to the buffer
 * pointed to by dest
 * @dest: points to string destination
 * @src: points to source string
 *
 * Return: nothing
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];

	} while (src[i] != '\0')

	return (dest);
}
