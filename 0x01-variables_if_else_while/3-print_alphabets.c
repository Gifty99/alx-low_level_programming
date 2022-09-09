#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - main block
 *
 * Description: Print the alphabet in lowercase and uppercase
 *
 * Return: 0
 *
 */

int main(void)

{

	char alphabet;


	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)

		putchar(alphabet);

	for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)

		putchar(alphabet);

	putchar('\n');


	return (0);

}
