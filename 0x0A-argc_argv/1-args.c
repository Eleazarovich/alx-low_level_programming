#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the number of arguments passed
 * @argc: number of command line arguments
 * @argv: commad line input
 * Return: 0 for success
 */

int main(int argc, char* argv[])
{
	if (argc == 1)
	{
		printf("%d\n", (argc - 1));
	}
	else
	{
		printf("%d\n", (argc - 1));
	}
	return (0);
}
