#include "main.h"

/**
 * _strspn - Function that gets the length of a prefix substring
 * @s: Input string to evaluate
 * @accept: string containing the list of chars to match in s
 * Return: the number of bytes in the initial segment
 * of s which consists only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				bytes++;
				break;
			}

			else if (accept[index + 1] == '\0')
				return (bytes);
		}
		s++;
	}

	return (bytes);
}
