#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - main block
 *
 * Description: Print the alphabet in lowercase
 *
 * Return: 0
 *
 */

int main(void)

{

	char alphabet;


	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)

		putchar(alphabet);

		putchar('\n');

	return (0);

}
