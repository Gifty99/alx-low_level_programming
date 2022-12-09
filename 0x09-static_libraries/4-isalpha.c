#include "main.h"

/**
 * _isalpha - runs _isalpha function
 *
 * @c: type int character
 *
 * Description - Check if character is an alphabetic character.
 *
 * Return: 1 if letter, lowercase or uppercase, and 0 if otherwise
 *
 */

int _isalpha(int c)

{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))

		return (1);

	else

		return (0);

}
