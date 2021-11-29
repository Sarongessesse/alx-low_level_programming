#include <stdio.h>
#include <stdlib.h>
void print_alphabet(void);
void print_alphabet()
{
  char x;
  for ( x = 'a'; x <= 'z'; x++)
    { putchar (x);
      putchar ('\n');
      return;
    }
}
