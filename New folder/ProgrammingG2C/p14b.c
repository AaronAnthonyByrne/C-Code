/* Program to demonstrate a macro with arguments. */
#define SQUARE(N) (N)*(N)
#include <stdio.h>
main()
{
  int n = 2 ;
  float f = 5.5 ;
  int result ;

  result = SQUARE(2) ;
  printf( "2 squared is %d\n", result ) ;
  printf( "5.5 squared is %4.2f\n", SQUARE(f) ) ;
  result = SQUARE( n+1 ) ;
  printf( "(2+1) squared is %d\n", result) ;
}
