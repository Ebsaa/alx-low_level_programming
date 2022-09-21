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
int i, j;
i = 0;
j = 0;

while (dest[i] != '\0')
i++;

while (src[j] != '\0' && j < n)
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';

return (dest);
}
