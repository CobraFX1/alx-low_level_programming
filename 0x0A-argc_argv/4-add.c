#include "main.h"

/**
 * main - addds all positive numbers written as arguuments and print them
 * @argc: counts the number of arguments
 * @argv: an array containing the arguments inputted
 *
 * Return: 0(Success)
 */

int main(int argc, char *argv[])
{
	int i, j;
	int sum = 0;

	if (argc > 1)
	{
		while (argc > 1)
		{
			i = argc - 1;
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
			argc--;
		}
		printf("%d\n", sum);
	}
	else
		printf("0\n");

	return (0);
}
