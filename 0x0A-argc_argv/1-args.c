#include <stdio.h>

/**
* main - prints the name number of arguments passed to it
* @argc: count arguments passed to the function
* @argv: argument vector of pointers to strings
* Returns: return 0
*/
int main(int argc, char *argv[] __attribute__((unused)))
{
		printf("%d\n", argc - 1);
			return (0);
}
