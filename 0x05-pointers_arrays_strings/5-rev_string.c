#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: input string
 *
 * Return: nothing
 */

void rev_string(char *s)
{
	int len = 0, i = 0;
	char tmp;

	while (s[len] != '\0')
		len++;

	while (i < len--)
	{
		tmp = s[i];
		s[i++] = s[len];
		s[len] = tmp;
	}
}
