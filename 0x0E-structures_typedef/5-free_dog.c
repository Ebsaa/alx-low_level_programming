#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
* free_dog - frees the space allocated to a dog variable
* @d: the dog variable
* Return: void
*/
void free_dog(dog_t *d)
{
if (d)
{
	free(d->name;
	free(d->owner);
	free(d);
}
}
