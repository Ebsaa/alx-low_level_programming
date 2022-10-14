#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_strings - prints strings
* @n: the number of arguments
* @separator: delimiter
* Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list strings;
unsigned int j = 0;
char *single_string;
va_start(strings, n);
	for (; j < n; j++)
		{
		single_string = va_arg(strings, char*);
		if (!separator)
		{
			printf("%s", single_string);
		}
		else if (!single_string)
			if (j == 0)
				printf("(nil)");
			else
				printf("%s(nil)", separator);
		else
		{
			if (j == 0)
			{
				printf("%s", single_string);
			}
			else
			{
				printf("%s%s", separator, single_string);
			}
		}
	}
	printf("\n");
}
