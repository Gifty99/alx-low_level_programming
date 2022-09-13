#include "main.h"

/**
 * print_alphabet_x10 - contains print_alphabet_x10 function
 *
 * Description: Print 10 times the alphabet, in lowercase, followed by a new line
 *
 * Return: 0
 *
 */

void print_alphabet(void)

{

	char alphabet;
	
	int i = 1;


	while (i <= 10)
	{
		alphabet = 'a';

		while (alphabet <= 'z')
		{

			_putchar(alphabet);

			alphabet++;

		}

		_putchar('\n');

		i++;

	}

}
