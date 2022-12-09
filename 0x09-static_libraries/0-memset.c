#include "main.h"

/**
 * _memset - A function that fills memory with a constant byte,
 * @s: location to fill
 * @b: constant byte to fill location with
 * @n: bytes to be filled
 * Return: the pointer to the filled location
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
		*(s + count) =  b;

	return (s);
}
