#include "main.h"

/**
* print_rev - prints a string, followed by a new line.
* @s: input string to print reverse.
*/

void print_rev(char *s)
{

int y;

while (s[y] != '\0')
{
y++;
}

y--;
while (s[y] != '\0')
{
_putchar(s[y--]);
}
_putchar('\n');
}
