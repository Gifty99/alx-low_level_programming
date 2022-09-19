#include "main.h"

/**
 * print_rev - a function that prints a string in reverse
 * followed by a new line.
 * @s: input string
 *
 * Return: nothing
 */

void print_rev(char *s)
{
	int length = 0;

	while (s[length])
		length++;

	while (length > 0)
		_putchar(s[--length]);

	_putchar('\n');
}
