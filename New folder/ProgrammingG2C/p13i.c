/* Rewrite of program P13H using the rewind() function.
 Program writes an array of ten integers to a file and
 reads them back again.                                */
#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
main()
{
  FILE *fp ;
  int count, i ;
  int array[SIZE]={ 0,1,2,3,4,5,6,7,8,9 } ; /* Array of integers. */

  /* Open the output file */
  if ( (fp=fopen("array.dat", "w+b")) == NULL )
  {
    puts( "Error on opening output file array.dat" ) ;
    exit( EXIT_FAILURE ) ;
  }

  /* Write the array to the file. */
  count = fwrite( array, sizeof(int), SIZE, fp ) ;
  if ( count != SIZE )
  {
    puts( "Error on writing array.dat" ) ;
    exit(  EXIT_FAILURE ) ;
  }

  rewind( fp ) ;

  /* Read the array from the file. */
  count = fread( array, sizeof(int), SIZE, fp ) ;
  if ( count != SIZE )
  {
    puts( "Error on reading array.dat" ) ;
    exit( 1 ) ;
  }
  fclose( fp ) ;

  puts( "The array values are :\n" ) ;
  for ( i = 0 ; i < SIZE ; i++ )
    printf( "%d\n", array [i] ) ;

  exit(  EXIT_SUCCESS ) ;
}
