#include "main.h"
/**
*print_alphabet_x10 - alpha
*
*Return:0
*/
void print_alphabet_x10(void)
{
int x;
for (x = 0; x < 10; x++)
{
char y;
for (y = 'a'; y <= 'z'; y++)
{
putchar (y);
}
putchar ('\n');
}
}
