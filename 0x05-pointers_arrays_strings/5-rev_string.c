#include "main.h"

/**
* rev_string - reverses a string
* @s: input string to reverse
*/

void rev_string(char *s)
{

char tmp;
int y, len, len1;

len = 0;
len1 = 0;

while (s[len] != '\0')
{
len++;
}
len1 = len - 1;
for (y = 0; y < len / 2; y++)
{
tmp = s[y];
s[y] = s[len1];
s[len1--] = tmp;
}
}
