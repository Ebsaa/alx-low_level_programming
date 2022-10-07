#include "main.h"
#include <stdlib.h>

/**
* _realloc - reallocates a memory block using malloc and free.
* @ptr: pointer to previously allocated memory
* @old_size: size  for ptr
* @new_size: size of newly space
* Return: pointer to newly space memory, or NULL if fails
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *p;
char *oldp = ptr;
unsigned int i, max = new_size;
if (ptr == NULL)
{
	p = malloc(new_size);
	return (p);
}
else if (new_size == 0)
{
	free(ptr);
	return (NULL);
}
else if (new_size == old_size)
	return (ptr);
p = malloc(new_size);
if (p == NULL)
	return (NULL);
if (new_size > old_size)
	max = old_size;
for (i = 0; i < max; i++)
	p[i] = oldp[i];
free(ptr);
return (p);
}
