#include "main.h"

/**
* _strncat - concatenates two string but add input num of bytes
* @dest: string to be appended upon
* @src: string to be completed at end of dest
* @n: integer parameter to compare index
* Return: return concatenated string
*/

char *_strncat(char *dest, char *src, int n);

{
int a, b;
a = 0;
b = 0;

while (dest[a] != '\0')
a++;

while (src[b] != '\0' && b < n)
{
dest[a] = src[b];
a++;
b++;
}
dest[a] = '\0';

return (dest);
}
