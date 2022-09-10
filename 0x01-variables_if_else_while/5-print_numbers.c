#include <stdio.h>
/**
*main-prints num 0 to 9
*
*Return:Always 0 (Succesful)
*/
int main(void)
{
char n;
for (n = '0'; n <= '9' ; n++)
{
putchar(n);
}
putchar('\n');
return (0);
}
