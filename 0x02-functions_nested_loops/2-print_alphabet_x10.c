#include "main.h"
/**
 *void print_alphabet_x10 - alpha
 *
 *Return:0
 */
void print_alphabet_x10(void)
{
  char x;
  for (x = 'a'; x <= 'z'; x++)
    {
      int y;
      for (y = 1; y <= 10; y++ )
	{
       putchar (x);
	 
	}	
      }
      putchar ('\n');
      return;
    }
}
