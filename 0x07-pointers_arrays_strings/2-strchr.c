#include "main.h"

/**
 * _strchr - A function that locates a character in a string
 * @s: an input string to perform search
 * @c: an input character to locate into string s
 * Return: returns pointer to c position
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (c == *s)
			return (s);

		s++;
	}

	if (c == *s)
		return (s);

	return ('\0');
}
