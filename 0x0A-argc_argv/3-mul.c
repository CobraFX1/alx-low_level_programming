#include "main.h"
#include <stdlib.h>

/**
 * main - multiplies two arguments
 * @argc: counts the number of arguments sent
 * @argv: an array conaining the arguments sent
 *
 * Return: 0(Success)
 */
int main(int argc, char *argv[])
{
	int mul;

	if (argc == 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
