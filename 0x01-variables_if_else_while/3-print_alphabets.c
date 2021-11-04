#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main: lowercase
*
*
*Return - 0
*/
int main(void)
{
char i;
for (i='a'; i <= 'z'; i++)
putchar (i);
for (i = 'A'; i <= 'z'; i++)
putchar (i);
putchar ('\n');
return (0);
}
