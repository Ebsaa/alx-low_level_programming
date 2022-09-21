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
for (b = 0; dest[b] != '\0'; b++)
while (src[a] != '\0' && a < n)
dest[b + a] = src[a];
a++;

return (dest);
}
