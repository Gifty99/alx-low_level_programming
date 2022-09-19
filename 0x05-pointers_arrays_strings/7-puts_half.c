#include "main.h"

/**
 * puts_half - a function that prints half of a string
 * @str: input string
 *
 * Return: nothing
 */

void puts_half(char *str)
{
	int length;

	for (length = 0; str[length] != '\0'; length++)
		;

	i++;

	for (length /= 2; str[length] != '\0'; length++)
		_putchar(str[length]);

	_putchar('\n');
}
