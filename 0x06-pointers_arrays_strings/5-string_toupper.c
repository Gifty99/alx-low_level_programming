#include "main.h"

/**
 * string_toupper -  A function that changes all lowercase letters
 * of a string to uppercase
 * @s: input string
 *
 * Return: pointer to converted string
 */

char *string_toupper(char *s)
{
	char *convert_string = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= ' ';

		s++;
	}

	return (convert_string);
}
