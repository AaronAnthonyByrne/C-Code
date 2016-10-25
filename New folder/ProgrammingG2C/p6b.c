/* Program to demonstrate a do-while loop.
    This program will read in a series of numbers from the
    keyboard, prints a running total, and stops when a 0
    is entered.                                           */
#include <stdio.h>
main()
{
  float num, total ;

  total = 0 ;
  do
  {
    printf( "Please enter a number " ) ;
    scanf( "%f", &num ) ;
    total += num ;
    printf( "The running total is %f\n\n", total ) ;
  }
  while ( num != 0 ) ;
  printf( "The final total is %f\n", total ) ;
}
