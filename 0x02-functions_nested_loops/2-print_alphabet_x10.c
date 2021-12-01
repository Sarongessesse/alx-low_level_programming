#include "main.h"
/**
*print_alphabet_x10 - alpha
*
*Return:0
*/
void print_alphabet_x10(void)
{
int x=0;
while (x < 10)
{
char y;
for (y = 'a'; y <= 'z'; y++)
{
putchar (y);
}
putchar ('\n');
x++;
}
}
