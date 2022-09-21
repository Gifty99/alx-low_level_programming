#include "main.h"

/**
 *cap_string - A function that capitalizes all words of a string
 *@s: input string
 *
 *Return: pointer to converted string
 */

char *cap_string(char *s)
{
	int x = 0, y;
	char separators[] = {' ', '\t', '\n', ',', ';', '.', '!',
	        '?', '"', '(', ')', '{', '}' };

	while (*s[x] != '\0')
	{
		if (x == 0 && s[x] >= 'a' && s[x] <= 'z')
			s[x] -= ' ';

		for (y = 0; y < 13; y++)
		{
			if (s[x] == separators[y])
			{
				if (s[x + 1] >= 'a' && s[x + 1] <= 'z')
					s[x + 1] -= ' ';
			}
		}

		x++;
	}

	return (s);
}
