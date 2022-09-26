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
	int x, y = 0, z = 0, k = 0;

	for (x = 0; *(s + x) != 0; x++)
	{
		for (y = 0;  *(accept + y) != 0; y++)
		{
			if (*(s + x) == *(accept + y))
			{
				z++;
				k = 1;
			}
		}
		if (k == 0)
			return (z);
	}

	return (0);
}
