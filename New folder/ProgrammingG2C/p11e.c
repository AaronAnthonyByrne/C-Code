/* Program to demonstrate passing arguments by value. */
#include <stdio.h>
main()
{
  void any_function( int a ) ;
  int a = 1 ;

  printf( "a is %d", a ) ;
  /* Pass a copy of the value of a to the function. */
  any_function( a ) ;
  printf( "\na is still %d\n", a ) ;
}

void any_function( int v )
{

  printf( "\nvalue passed to function is %d", v ) ;
  v = 2 ; /* Change the value of the formal argument. */
  printf( "\nvalue passed to function is now %d", v ) ;
}
