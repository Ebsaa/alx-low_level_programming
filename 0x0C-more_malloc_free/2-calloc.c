#include <stdlib.h>
#include "main.h"

/**
* _calloc - allocates memory of an array using malloc
* @nmemb: number of elements in array
* @size: size of elements in array
* Return: nnmemb == 0 or NULL is size
* NULL if malloc fails
* pointer to memory allocated if successful
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *arr;
unsigned int i;
if (nmemb == 0 || size == 0)
	return (NULL);
arr = malloc(nmemb * size);
if (arr == NULL)
	return (NULL);
for (i = 0; i < (nmemb * size); i++)
	arr[i] = 0;
return (arr);
}
