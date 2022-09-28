#include "main.h"

int a_prime(int, int);

/**
 * is_prime_number - Function that detects a prime number
 * @n: input number to evaluate
 *
 * Return: 1 if n is a prime number, otherwise, 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (a_prime(n, n - 1));
}

/**
 * a_prime - checks if a number is prime recursively
 * @i: input number to evaluate
 * @j: iterator
 *
 * Return: 1 if i is prime, otherwise, 0
 */

int a_prime(int i, int j)
{
	if (j == 1)
		return (1);

	if (i % j == 0 && j > 0)
		return (0);

	return (a_prime(i, j - 1));
}
