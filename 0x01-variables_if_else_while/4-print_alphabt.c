#include <stdio.h>
/**
*main-prints lowercase alphabates
*
*Return:Always 0 (Succesful)
*/
int main(void)
{
char c;
for (c = 'a'; c <= 'z' ; c++)
{
if (c != 'e' && c != 'q')
{
putchar(c);
}
}
putchar('\n');
return (0);
}
