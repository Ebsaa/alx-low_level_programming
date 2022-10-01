#include "main.h"

/**
* _memcpy - copies n bytes from memory src to memory area dest
* @dest: the destination string
* @src: the source to copy
* @n: the number of bytes to copy
* Return: a pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int j = 0;
	while (j < n)
	{
		dest[j] = src[j];
		j++;
	}
	return (dest);
}
