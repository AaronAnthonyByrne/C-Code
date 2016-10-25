/* Program to demonstrate the use of functions by surrounding
    a piece of text with a box of asterisks.                 */
#include <stdio.h>
main()
{
  void stars( void ) ;  /* Declare the function. */
  char *text = "some text" ;

  stars() ;  /* Call the function to display top of box. */
  putchar( '\n' ) ;
  putchar( '*' ) ; /* Left side of box.      */
  printf( text ) ; /* Text in middle of box. */
  putchar( '*' ) ; /* Right side of box.     */
  putchar( '\n' ) ;
  stars() ;  /* Call function again, the bottom of the box. */
  putchar( '\n' ) ;
} /* This is the end of the main function. */

/* The function definition. */
void stars()
{
  int counter ;

  for ( counter = 0 ; counter < 11 ; counter++ )
    putchar( '*' ) ;
} /* This is the end of the stars function. */
