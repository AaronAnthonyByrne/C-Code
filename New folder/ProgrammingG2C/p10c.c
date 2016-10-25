/* Program to read a string from the keyboard using gets(). */
#include <stdio.h>
main()
{
  char in_name[21] ; /* in_name will hold up to 20 characters + 1
                        for the terminating null character '/0'. */

  printf( "Type your name:" ) ;
  gets( in_name ) ;

  printf( "Hello, " ) ;
  puts( in_name ) ;
}
