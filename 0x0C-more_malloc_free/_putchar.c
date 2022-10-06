#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
* _putchar - writes char c to stdout
* @c: char to print
* Return: 1 on success
* on error, -1 is returned & err no is set appropriatly
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
