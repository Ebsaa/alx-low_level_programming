#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers
 * @separator: delimiter
 * @n: numbrer of argument
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int j = 0;
va_list nums;
int number;
	va_start(nums, n);
	for (; j < n; j++)
	{
		number = va_arg(nums, int);
		if (!separator)
			printf("%d", number);
		else
		{
			if (j == 0)
				printf("%d", number);
			else
				printf("%s%d", separator, number);
		}
	}
	printf("\n");
	va_end(nums);
}
