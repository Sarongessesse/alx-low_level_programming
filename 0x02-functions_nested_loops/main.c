#include "main.h"
void print_alphabet( );
int main(void)
{
print_alphabet ();
return (0);
}
void print_alphabet( )
{
char x;
for( x = 'a' ; x <= 'z' ; x++ )
{
putchar (x);
putchar ('\n');
}
return ;
}
