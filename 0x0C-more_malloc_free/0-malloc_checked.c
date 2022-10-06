#include "main.h"
#include <stdlib.h>

/**
* malloc_checked - alloc memory by malloc
* @b:size of memory to be allocated
* Return: pointer to allocate memory
*/
void *malloc_checked(unsigned int b)
{
void *p = malloc(b);
if (p == Null)
exit(98);
return (0);
}
