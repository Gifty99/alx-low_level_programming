#include "main.h"

/**
 * _isupper - A function that checks for uppercase character
 * @c: An input character
 * Return: 1 if c is uppercase or 0 if otherwise
 */

int _isupper(int c)
{

	char uppercase;

	int i = 0;


	for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
	{
		if (c == uppercase)
		{
			i = 1;
			break;
		}
	}

	return (i);

	/**
	* {
	*	if (c >= 65 && c <= 90)
	*
	*		return (1);
	*
	*	else
	*		return (0);
	* }
	*/
}
