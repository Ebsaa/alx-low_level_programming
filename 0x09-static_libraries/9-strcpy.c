#include "main.h"

/**
* _strcpy - copies the string pointed to by src
* including the terminating null byte (\0)
* to the buffer pointed to by dest
* @dest: pointer to the buffer in which we copy the string
* @src: string tthose copied
* Return: the pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
int len, c;

len = 0;
while (src[len] != '\0')
{
len++;
}

for (c = 0; c < len; c++)
{
dest[c] = src[c];
}
dest[c] = '\0';
return (dest);
}
