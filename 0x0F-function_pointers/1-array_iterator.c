#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>

/**
* array_iterator - executes a function given as a parameter
* @array: array
* @size: size of array
* @action: pointer to the function to use
* Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i = 0;
if (!array || !action)
	exit(EXIT_SUCCESS);

for (; i < size; i++)
	{
	action(array[i]);
	}
}
