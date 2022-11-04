#include <stdio.h>

/**
 * main - prints the number of arguments passed
 * @argc: number of command line arguments
 * @argv: commad line input
 * Return: 0 for success
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", (argc - 1));
	return (0);
}
