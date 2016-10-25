/* Program to demonstrate dynamic memory allocation
    using malloc().                                 */
#include <stdio.h>
#include <stdlib.h>
main()
{
  int *ptr;
  int no_els, no_bytes, i ; //no_els = number of elements

  printf( "Enter the number of elements " ) ;
  scanf( "%d", &no_els ) ;

  /* Calculate the number of bytes required by the array. */
  no_bytes = no_els * 1 ; //sizeof is a function in stdlib.h
 
 /* Allocate the memory. */
  ptr = (int *) malloc( no_bytes ) ;
//check if successful
  if ( ptr == NULL )
{
    printf( "cannot allocate memory" ) ;
} 
 else
  {

    /* Enter a value for each element of the array. */
    for ( i=0; i<no_els; i++ )
    {
      printf( "Enter element %d ",i ) ;
      scanf( "%d", & *(ptr+i )) ;
    }





    /* Display the element values just entered. */
    for ( i=0; i<no_els; i++ )
      printf( "Element %d is %d\n", i, *(ptr +i) ) ;

    free( ptr ) ; /* Free the allocated memory. */
  } //end else
  
  getchar();
} //end main
