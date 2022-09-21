#include "main.h"

/**
 *cap_string - A function that capitalizes all words of a string
 *@s: input string
 *
 *Return: pointer to converted string
 */

char *cap_string(char *s)
{
	int count = 0, i;
	char sep[] = { ' ', '\t', '\n', ',', ';', '.', '!', '?',
		'"', '(', ')', '{', '}' };

	if (*(s + count) >= 'a' && *(s + count) <= 'a')
		*(s + count) = *(s + count) - ' ';

	count++;

	while (*(s + count) != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*(s + count) == sep[i])
			{
				if ((*(s + (count + 1)) >= 'a') && (*(s + (count + 1)) <= 'z')
					*(s + (count + 1)) = *(s + (count + 1)) - ' ';
				break;
			}
		}

		count++;
	}

	return (s);
}
