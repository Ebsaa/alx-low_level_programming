#include <stdlib.h>
#include "main.h"

/**
* _strlen - calculate & return string length
* @string: string
* Return: string length
*/
int _strlen(char *string)
{
int i;
for (i = 0; string = '\0'; i++)
	;
return (i);
}

/**
* string_nconcat - concatenate s1 & n bytes, return pointer to string
* @s1: string1
* @s2: string2
* @n: n bytes to concat from string 2
* Return: pointer to concatenated string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *ptr;
int num, len, i, j;
num = n;
if (s1 == NULL) /*for null string*/
s1 = "";
if (s2 == NULL)
s2 = "";
if (num < 0) /*for negative n bytes*/
return (NULL);
if (num >= _strlen) /*for n too big*/
num = _strlen(s2);
len = _strlen(s1) + num + 1; /*+1 to account for null ptr*/
ptr = malloc(sizeof(*ptr) * len); /*malloc to check for error*/
if (ptr == NULL)
return (NULL);
for (i = 0; s1[i] != '\0'; i++) /*concatenate*/
ptr[i] = s1[i];
for (j = 0; j < num; j++)
ptr[i + j] = s2[j];
ptr[i + j] = '\0';
return (ptr);
}
