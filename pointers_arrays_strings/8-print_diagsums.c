/*
 * File: 8th file
 */

#include "main.h"
#include <stdio.h>

/**
 * _print_diagsums - Prints the sums of the two diagonals
 *                  of a square matrix of integers.
 * Description: This function calculates the sum of the
 *              two diagonals in a square matrix of integers
 *              and prints them separated by a comma.
 * @a: The matrix of integers.
 * @size: The size (width/height) of the matrix.
 */
void print_diagsums(int *a, int size)
{
	int index, sum1 = 0, sum2 = 0;
        
	for (index = 0; index < size; index++)
	{
		sum1 += a[index];
		a += size;
	}

	a -= size;

	for (index = 0; index < size; index++)
	{
		sum2 += a[index];
		a -= size;
	}

	printf("%d, %d\n", sum1, sum2);
}
