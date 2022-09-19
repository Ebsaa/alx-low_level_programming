#include "main.h"

/**
* print_number - prints an integer
* @a: num to be printed
*/

void print_number(int a)
{
unsigned int a1;

if (a < 0)
{
a1 = -a;
_putchar('-');
}
else
{
a1 = a;
}
if (a1 / 10)
{
print_number(a1 / 10);
}
_putchar((a1 % 10) + '0');
}
