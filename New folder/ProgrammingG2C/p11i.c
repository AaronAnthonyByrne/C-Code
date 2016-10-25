/* Program to demonstrate passing a two-dimensional array
    to a function.                                       */
#include <stdio.h>
main()
{
  int sum_array( int array[][2] ,int no_of_rows ) ;
 int values[5][2] = { { 31, 14 }, 
                        { 51, 11 }, 
                        {  7, 10 }, 
                        { 13, 41 }, 
                        { 16, 18 } } ; 
  int sum ;

  sum = sum_array( values, 5 ) ;
  printf( "The sum of the array elements is %d\n", sum ) ;
}

/* Function  : sum_array
    Purpose   : Sums the elements of a 2-D integer array.
    Arguments : An array and the number of elements in the array.
    Returns   : The sum of the array elements.                   */
int sum_array( int array[][2], int no_of_rows )
{
  int row, col ;
  int sum = 0 ;

  for ( row = 0 ; row < no_of_rows ; row++ )
  {
    for ( col = 0 ; col < 2 ; col++ )
      sum += array[row][col] ;
  }
  return ( sum ) ;
}
