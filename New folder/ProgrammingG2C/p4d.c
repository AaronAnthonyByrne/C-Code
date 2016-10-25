/* Program to input a single character and display it */
#include <stdio.h>
main()
{
  char ch;

  printf( "Press a key and then press Enter " ) ;
  scanf( "%c", &ch ) ;
  printf( "You pressed the %c key\n",ch ) ;
}