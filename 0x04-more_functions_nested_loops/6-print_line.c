#include "main.h"

/**
* print_line - draws length of straight line
* @n: number of times the character _ should be printed
*/

void print_line(int n)
{

if (n <= 0)
_putchar('\n');
else
{
int x;

for (x = 1; x <= n; x++)
_putchar('_');
_putchar('\n');
}
}
