/* Program to calculate the average age of ten people
    using an array.                                   */
#include <stdio.h>
main()
{
  int ages[10] ;
  int index ;
  int total_age = 0 ;

  printf( "Please enter the ages of ten people\n" ) ;
  /* Input each age. */
  for ( index = 0 ; index < 10 ; index ++ )
  {
    scanf( "%d", &ages[index] ) ;
    total_age += ages[index] ;
  }

  printf( "The average age is %d\n", total_age / 10 ) ;
}
