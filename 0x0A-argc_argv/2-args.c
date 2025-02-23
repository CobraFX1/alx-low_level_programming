#include "main.h"

/**
 * main - prints all arguments it recieves
 * @argc: counts the number of arguments
 * @argv: an array that stores the arguments
 *
 * Return: 0(Success)
 */

int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
