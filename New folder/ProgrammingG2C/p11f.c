/* Program to demonstrate passing arguments by reference. */
#include <stdio.h>
main()
{
  void any_function( int *p ) ;
  int a = 1 ;

  printf( "a is %d", a ) ;
  /* Pass the address of a to the function. */
  any_function( &a ) ;
  printf( "\na is now changed to %d\n", a ) ;
}

void any_function( int *p )
{
  printf( "\nvalue passed to function is %d", *p ) ;
  *p = 2 ; /* Change the value of the actual argument. */
  printf( "\nvalue passed to function is now %d", *p ) ;
}
