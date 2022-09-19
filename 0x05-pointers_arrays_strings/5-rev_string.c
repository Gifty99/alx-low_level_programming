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

	n = length - 1;

	length /= 2;

	while (length--)
	{
		tmp = s[m];
		s[m] = s[n];
		s[n] = tmp;

		m++;
		n--;
	}
}
