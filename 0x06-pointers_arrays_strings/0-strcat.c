#include "main.h"

/**
* _strcat - concatenates the string pointed by @src
* to the end of the string pointed to by @dest
* @dest: string which will be appended
* @src: string to be concatenated upon
* Return: returns pointer to @dest
*/

char *_strcat(char *dest, char *src)
{
int a, b;

a = 0;
b = 0;

while (dest[a] != '\0')
a++;

while (src[b] != '\0')
{
dest[a] = src[b];
b++;
a++;
}
dest[a] = '\0';

return (dest);
}
