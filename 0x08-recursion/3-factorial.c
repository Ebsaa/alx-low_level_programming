#include "main.h"

/**
* factorial - function returns the factorial of a given num
* @n: factorial on given num to print
* Return: factorial of n
*/
int factorial(int n)
{
if (n < 0)
	return (-1);
else if (n == 0)
	return (1);
else
return (n * factorial(n - 1));
}
