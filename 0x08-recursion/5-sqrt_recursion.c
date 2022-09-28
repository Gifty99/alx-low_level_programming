#include "main.h"

int actual_sqrt(int, int);

/**
 * _sqrt_recursion - Function that returns the natural
 * square root of a number
 * @n: number to calculate the square root of
 *
 * Return: the resulting square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (actual_sqrt(n, 0));
}

/**
 * actual_sqrt - recurses to find the natural
 * square root of a number
 * @i: number to calculate the sqaure root of
 * @j: iterator
 *
 * Return: the resulting square root
 */

int actual_sqrt(int i, int j)
{
	if (j * j > i)
		return (-1);

	if (j * j == i)
		return (j);

	return (actual_sqrt(i, j + 1));
}
