#include "main.h"
#include <stdlib.h>

/**
* malloc_checked - alloc memory by malloc
* @b:size of memory to be allocated
* Return: pointer to allocate memory
*/
void *malloc_checked(unsigned int b)
{
void *p;
p = malloc(b);
if (p == NULL)
	exit(98);
return (p);
}
