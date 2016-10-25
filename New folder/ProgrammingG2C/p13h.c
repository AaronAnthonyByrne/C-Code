/* Demonstration of block I-O routines fread() and fwrite().
    Program writes an array of ten integers to a file and
    reads them back again.                                 */
#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
main()
{
  FILE *fp ;
  int count, i ;
  int array[SIZE] = { 0,1,2,3,4,5,6,7,8,9 } ;

  /* Open the output file. */
     if ( (fp = fopen("array.dat", "wb")) == NULL )
    {
       puts( "Error on opening output file array.dat" ) ;
       exit( 1 ) ;
     }

  /* Write the array to the file. */
  count = fwrite( array, sizeof(int), SIZE, fp ) ;
  if ( count != SIZE )
  {
    puts( "Error on writing array.dat" ) ;
    exit( EXIT_FAILURE ) ;
  }
  fclose( fp ) ;

  /* Open the file for input. */
  if ( (fp = fopen("array.dat", "rb")) == NULL )
  {
    puts( "Error on opening input file array.dat" ) ;
    exit(  EXIT_FAILURE ) ;
  }

  /* Read the array from the file */
  count = fread( array, sizeof(int), SIZE, fp ) ;
  if ( count != SIZE )
  {
    puts( "Error on reading array.dat" ) ;
    exit(  EXIT_FAILURE ) ;
  }
  fclose(fp) ;

  puts( "The array values are :\n" ) ;
  for ( i = 0 ; i < SIZE ; i++)
    printf( "%d\n", array [i] ) ;
}
