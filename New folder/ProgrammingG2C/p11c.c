/* Program to demonstrate the use of a function with two
    arguments.                                           */
#include <stdio.h>
main()
{
  void disp_chars( int num, char ch) ; /* Function prototype.  */
  char *text = "some text" ;

  /* top of box */
  disp_chars( 35, ' ' ) ; /* First display thirty-five blanks, */
  disp_chars( 11, '+' ) ; /* then eleven +s.                   */
  putchar( '\n' ) ;
  /* Left side of box */
  disp_chars( 35, ' ' ) ;
  disp_chars( 1, '+' ) ;
  /* Display text */
  printf( text ) ;
  /* Right side of box */
  disp_chars( 1, '+' ) ;
  putchar( '\n' ) ;
  /* Bottom of the box */
  disp_chars( 35, ' ' ) ;
  disp_chars( 11, '+' ) ;
  putchar( '\n' ) ;
}

/* Function : disp_chars
    This function will display any number of any character.
    Arguments : num - the number of times to display a character.
                ch  - the character to display.                */
void disp_chars( int num, char ch )
{
  int counter ;

  for ( counter = 0 ; counter < num ; counter++ )
    putchar( ch ) ;
}
