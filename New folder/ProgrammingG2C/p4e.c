/* Program to introduce getchar() and putchar() */
#include <stdio.h>
main()
{
  char ch;

  printf( "Press a key and then press Enter " ) ;
  ch = getchar() ;
  printf( "\nYou pressed " ) ;
  putchar( ch ) ;    /* Display the character and */
  putchar ( '\n' ) ; /* skip to a new line.       */
}
