#include "main.h"

/**
* _pow_recursion - function returns the value of x raised by power of y
* @x: value of variable x
* @y: raised power of x by y
* Return: x power y
*/
int _pow_recursion(int x, int y)
{
if (y < 0)
	return (-1);
	{
	else if (y == 0)
	return (1);
	}
	else
	return (x * _pow_recursion(x, y - 1));
}
