#include "main.h"

/**
* puts2 - Prints out every other char
* @str: input string to print
*/

void puts2(char *str)
{

int a;

while (str[a] != '\0')
{
if (a % 2 == 0)
_putchar(str[a]);
a++;
}
_putchar('\n');
}
