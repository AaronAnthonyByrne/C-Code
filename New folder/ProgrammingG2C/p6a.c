/* Program to demonstrate the use of the while statement.
    This program reads in a series of numbers from the
    keyboard, prints a running total, and stops when a 0
    is entered.                                         */
#include <stdio.h>
main()
{
  float num, total ;

  total = 0 ;
  num = 1 ;
  while ( num != 0 )
  {
    printf( "Please enter a number " ) ;
    scanf( "%f", &num ) ;
    total += num ;
    printf( "The running total is %f\n\n", total ) ;
  }
  printf( "The final total is %f\n", total) ;
}
