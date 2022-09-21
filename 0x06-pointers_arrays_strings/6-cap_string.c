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

	while (*(s + x))
	{
		for (y = 0; y < 13; y++)
		{
			if (x == 0 && s[x] >= 'a' && s[x] <= 'z')
				s[x] -= ' ';

			if (s[x - 1] == separators[y])
			{
				if ((*(s + x) >= 'a') && (*(s + x) <= 'z'))
					*(s + x) -= ' ';
			}
		}

		x++;
	}

	return (s);
}
