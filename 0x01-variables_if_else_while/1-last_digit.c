#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - main block
 *
 * Description: Get a random number and print the number when it is 
 * greater than 5, 0, less tha
 *
 * Return: 0
 *
 */

int main(void)

{

	int m, n;


	srand(time(0));

	n = rand() - RAND_MAX / 2;

	m = n % 10;


	if (m > 5)

	printf("Last digit of %d is %d and is greater than 5\n", n, m);

	else if (m == 0)

	printf("Last digit of %d is %d and is 0\n", n, m);

	else

	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);

	return (0);

}
