#include "main.h"
#include <stdio.h>

/**
* print_diagsums - prints the sum of the two diagonals
* of a square matrix of integers
* @a: square matrix we to print the sum of diagonals
* @size: size of the matrix
*/
void print_diagsums(int *a, int size)
{
int b;
unsigned int sum1 = 0, sum2 = 0;
for (b = 0; b < size; b++)
{
sum1 += a[(size * b) + b];
sum2 += a[(size * (b + 1)) - (b + 1)];
}
printf("%d, %d\n", sum1, sum2);
}
