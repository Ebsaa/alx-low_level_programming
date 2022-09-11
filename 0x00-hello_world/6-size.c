#include <stdio.h>
/**
*main - prints the size of various types on the computer
*
*Return : Always 0 (Successful)
*/
int main(void)
{
char v;
int w;
long int x;
long long int y;
float z;
printf("size of a char: %d byte(s)\n", sizeof(v));
printf("size of an int: %d byte(s)\n", sizeof(w));
printf("size of long int: %d byte(s)\n", sizeof(x));
printf("size of long long int: %d byte(s)\n", sizeof(y));
printf("size of a float: %d byte(s)\n", sizeof(z));
return (0);
}
