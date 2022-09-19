#include "main.h"

/**
* print_rev - prints a string, followed by a new line.
* @s: input string to print reverse.
*/

void print_rev(char *s)
{
int a, b, len;
a = 0;

while (s[a] != '\0')
{
a++;
}
len = a;
for (b = len - 1; b >= 0; b--)
{
_putchar(s[b]);
}
_putchar('\n');
}
