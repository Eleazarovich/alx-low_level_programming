#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: number of command line arguments
 * @argv: inputs in the command line arguments
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int result;

		result = (atoi(argv[1]) * atoi(argv[2]));
		printf("%d\n", result);
	}
	return (0);
}
