#include <stdio.h>

/**
 * main - program that prints the number of arguments passed into it
 * @argc: An argument count
 * @argv: An argument value
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	if (argv[0])
		printf("%d\n", argc - 1);

	return (0);
}