#include "main.h"
#include <stdlib.h>

/**
* argstostr - Concatenates all arguments into a string;
* arguments are separated by a new line in the string.
* @ac: The number of arguments passed
* @av: An array of pointers to the arguments.
* Return: If ac == 0, av == NULL, or the function fails - NULL.
* Otherwise - a pointer to the new string.
*/
char *argstostr(int ac, char **av)
{
int i, j, k = 0, n = 0;
char *s;
if (ac <= 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
n++;
n++;
}
n++;
s = malloc(n *sizeof(char));
if (s == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
s[k] = av[i][j];
k++;
}
s[k] = '\n';
k++;
}
s[k] = '\0';
return (s);
}
