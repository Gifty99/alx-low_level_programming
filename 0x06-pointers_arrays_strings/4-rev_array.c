#include "main.h"

/**
 * reverse_array - A function that reverses the content
 * of an array of integers
 * @a: input array of integer
 * @n: input integer (no. of elements in the array)
 *
 * Return: pointer to dest
 */

void reverse_array(int *a, int n)
{
	int count = 0;
	int tmp;

	while (count < n--)
	{
		tmp = a[count];
		a[count++] = a[n];
		a[n] = tmp;
	}
}
