#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints diagonal sums of square matrix
 * @a: square matrix of integers
 * @size: col & row size of matrix
 * Return: always void
*/
void print_diagsums(int *a, int size)
{
	int b, sum1 = 0, sum2 = 0;
	for (b = 0; b < size; b++)
	{
		sum1 += a[(size + 1) * b];
		sum2 += a[(size - 1) * (b + 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
