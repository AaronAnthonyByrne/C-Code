/* Program to display the amount of memory required by 
    C data types.                                      */
#include <stdio.h>
main()
{
  printf( " Data type       Number of bytes\n" ) ;
  printf( " ---------       ---------------\n" ) ;
  printf( "  char               %d\n",sizeof(char) ) ;
  printf( "  int                %d\n",sizeof(int) ) ;
  printf( "  short int          %d\n",sizeof(short) ) ;
  printf( "  float              %d\n",sizeof(float) ) ;
  printf( "  double             %d\n",sizeof(double) ) ;
}
