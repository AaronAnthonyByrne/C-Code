/* Program to demonstrate dynamic memory allocation
    using malloc().                                 */
#include <stdio.h>
#include <stdlib.h>
main()
{
  int *int_array ;
  int no_els, no_bytes, i ;

  printf( "Enter the number of elements " ) ;
  scanf( "%d", &no_els ) ;

  /* Calculate the number of bytes required by the array. */
  no_bytes = no_els * sizeof(int) ;
  /* Allocate the memory. */
  int_array = (int *) malloc( no_bytes ) ;
  if ( int_array == NULL )
    printf( "cannot allocate memory" ) ;
  else
  {
    /* Enter a value for each element of the array. */
    for ( i=0; i<no_els; i++ )
    {
      printf( "Enter element %d ",i ) ;
      scanf( "%d", int_array+i ) ;
    }

    /* Display the element values just entered. */
    for ( i=0; i<no_els; i++ )
      printf( "Element %d is %d\n", i, *(int_array+i) ) ;

    free( int_array ) ; /* Free the allocated memory. */
  }
}
