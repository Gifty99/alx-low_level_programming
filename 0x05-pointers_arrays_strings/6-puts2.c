#include "main.h"

/**
 * puts2 - a function that prints every character of a string
 * starting with the first character, followed by a new line.
 * @str: input string
 *
 * Return: nothing
 */

void puts2(char *str)
{
	int length;

	for (length = 0; str[length] != '\0'; length++)
	{
		if (length % 2 == 0)
			_putchar(str[length]);
	}

	_putchar('\n');
}
