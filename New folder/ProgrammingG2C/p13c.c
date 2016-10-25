/* Demonstration of the function fgetc() by reading
    the contents of a file character by character. */
#include <stdio.h>
#include <stdlib.h>
main()
{
  FILE *fp ;
  char char_in ;

  if ( (fp = fopen("file.txt", "r")) == NULL )
    puts( "Error in opening file.txt" ) ;
  else
  {
    while( (char_in = fgetc(fp)) != EOF )
      putchar( char_in ) ;
    fclose( fp ) ;
  }
}
