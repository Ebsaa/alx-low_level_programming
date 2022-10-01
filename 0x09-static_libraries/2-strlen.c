#include "main.h"

/**
* _strlen - calculates the length of a string.
* @s: pointer to the character array.
* Return: length of the string
*/

int _strlen(char *s)
{
int a;

a = 0;
while (*s != '\0')
{
a++;
s++;
}
return (a);
}
