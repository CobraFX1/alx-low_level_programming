#include "main.h"
/**
 * print_diagsums - prints the sum of the two diagonals of any square matrix
 * @a: character
 * @size: character
 *
 * Return: Nothing
 */

void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
		sum2 += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", sum1, sum2);
}
