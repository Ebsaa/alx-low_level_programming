#include "main.h"

/**
* cap_string - capitalized all words of string
* @str: capitalize string
* Return: return address of s
*/
char *cap_string(char *str)

{
int i, j, k;

char delimiters[] = " \t\n,;.!?\"(){}";
for (; str[i]; i++)
{
	if (i == 0 && (str[i] >= 'a' && str[i] <= 'z'))
	{
		str[i] -= 32;
	}
	j = 0;
	for (; delimiters[j]; j++)
	{
			if (str[i] == delimiters[j])
		{
				i++;
				for (k = 0; delimiters[k]; k++)
			{
					if (str[i] == delimiters[k])
				{
					i++;
				}
			}
					if (str[i] >= 'a' && str[i] <= 'z')
			{
						str[i] -= 32;
			}
		}
	}
}
return (str);
}
