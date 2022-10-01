#include "main.h"

/**
* _strncpy - function that copy the string
* if length of src stringis less than max byte num &
* remaider dest string is less than max byte num
* @dest: buffer storing string cpy
* @src: source string
* @n: max num byte copied
* Return: return
*/

char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];
for ( ; i < n; i++)
dest[i] = '\0';
return (dest);
}
