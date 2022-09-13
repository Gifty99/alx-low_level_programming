#include "main.h"

/**
 * print_alphabet_x10 - contains print_alphabet_x10 function
 *
 * Description: Print 10 times the alphabet, in lowercase, followed by a new line
 *
 * Return nothing
 *
 */

void print_alphabet_x10(void)

{

	char alphabet;
	
	int i;


	for (i = 0; i < 10; i++)
	{

		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)

			_putchar(alphabet);

		_putchar('\n');

	}

}
