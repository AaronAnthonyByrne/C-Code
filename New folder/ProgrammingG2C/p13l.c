/* Program to demonstrate file deletion using remove(). */
#include <stdio.h>
main()
{
  char file[81] ;
  int return_code ;

  printf( "Enter the name of the file to delete: ") ;
  gets( file ) ;

  return_code = remove( file ) ;

  /* Has the file been successfully deleted? */
  if ( return_code == 0 )
    printf( "%s is deleted\n",file ) ;
  else
    printf( "%s cannot be deleted\n",file ) ;
}
