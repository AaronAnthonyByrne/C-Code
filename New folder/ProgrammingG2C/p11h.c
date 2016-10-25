/* Program to demonstrate passing a one-dimensional array
    to a function.                                        */
#include <stdio.h>
main()
{
  int sum_array( int *array, int no_of_elements ) ;
  int values[10] = { 12, 4, 5, 3, 4, 0, 1, 8, 2, 3 } ;
  int sum ;

  sum = sum_array( values, 10 ) ;
  printf( "The sum of the array elements is %d\n", sum ) ;
}

/* Function : sum_array
    Purpose  : Sums the elements of a 1-dimensional integer array.
    Arguments: An array name and the number of elements in the array.
    Returns  : The sum of the array elements.                      */
int sum_array( int *array, int no_of_elements )
{
  int index ;
  int sum = 0 ;

  for ( index = 0 ; index < no_of_elements ; index++ )
    sum += *( array + index ) ;
  return ( sum ) ;
}
