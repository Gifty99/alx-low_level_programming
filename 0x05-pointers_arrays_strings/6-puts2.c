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
	int length, m;

	for (length = 0; str[length] != '\0'; length++)

	length -= 1;

	for (m = 0; m <= length; m += 2)
		_putchar(str[m]);

	_putchar('\n');
}
