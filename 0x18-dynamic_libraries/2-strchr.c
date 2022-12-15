#include "main.h"

/**
* _strchr - locates a char in a string
* @s: the string to scan
* @c: the character being searched
* Return: a pointer to the first found of c
*/
char *_strchr(char *s, char c)
{
	while (*s)
	{
		s++;
		if (*s == c)
		{
			return (s);
		}
	}
	return (0);
}
