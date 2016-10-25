/* Program to demonstrate the use of the return statement.   */
#include <stdio.h>
main()
{
  int minimum( int num1, int num2 ) ; /* Function prototype. */
  int val1, val2, min_val ;

  /* Read in two integer values from the keyborad. */
  printf( "Please enter two integers: " ) ;
  scanf( "%d %d", &val1, &val2 ) ;

  /* Find the minimum of these two values. */
  min_val = minimum( val1, val2 ) ;
  printf( "Minimum of %d and %d is %d\n", val1, val2 ,min_val );
}

/* Function  : minimum
    This function will return the minimum of two integers.
    Arguments : num1 and num2: two integer values.
    Returns   : minimum of num1 and num2.                   */
int minimum( int num1, int num2 )
{
  if ( num1 < num2 )
    return ( num1 ) ;
  else
    return ( num2 ) ;
}
