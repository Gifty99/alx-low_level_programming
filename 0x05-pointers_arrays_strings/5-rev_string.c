#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: input string
 *
 * Return: nothing
 */

void rev_string(char *s)
{
	int length, m = 0, n;
	char tmp;

	for (length = 0; s[length] != '\0'; length++)

	n = length / 2;

	while (n--)
	{
		tmp = s[length - m -1];
		s[length - m -1] = s[m];
		s[m] = tmp;

		m++;
	}
}
