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
	char *tmp = dest;

	while (*src)
		*dest++ = *src++;

	while (src[-1] != '\0')
		dest[-1] != src[-1];

	return (tmp);
}
