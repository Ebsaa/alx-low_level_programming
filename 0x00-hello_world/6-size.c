#include <stdio.h>
/**
*main-prints the size of various types on the computer
*
*Return: Always 0 (Successful)
*/
int main(void)
{
char a;
int b;
long int c;
long long int d;
float e;
printf("Size of a char: %d byte(s)\n", Sizeof(a));
printf("Size of an int: %d byte(s)\n", Sizeof(b));
printf("Size of a long int: %d byte(s)\n", Sizeof(c));
printf("Size of a long long int: %d byte(s)\n", Sizeof(d));
printf("Size of a float: %d byte(s)\n", Sizeof(e));
return (0);
}
