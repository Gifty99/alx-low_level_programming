#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: input string
 *
 * Return: nothing
 */

void rev_string(char *s)
{
	int length, m = 0;
	char tmp;

	for (length = 0; s[length]; length++)

	while (m < length--)
	{
		tmp = s[m];
		s[m++]  = s[length];
		s[length] = tmp;
	}
}
