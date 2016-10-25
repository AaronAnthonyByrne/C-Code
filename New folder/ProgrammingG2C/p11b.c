/* Program to demonstrate the use of function arguments. */
#include <stdio.h>
main()
{
  void stars( int ) ;  /* Declare the function. */
  char *text = "some text" ;

  stars( 11 ) ; /*Call the function to print 11 *s - top of box*/
  putchar( '\n' ) ;
  stars( 1 ) ;     /* Left side of box  - 1 * only.  */
  printf( text ) ; /* Text in the middle of the box. */
  stars( 1 ) ;     /* Right side of box - 1 * only.  */
  putchar( '\n' ) ;
  stars( 11 ) ;    /* Bottom of the box - 11 *s.     */
  putchar( '\n' ) ;
}

void stars( int num )
{
  int counter ;
  for ( counter = 0 ; counter < num ; counter++ )
    putchar( '*' ) ;
}
