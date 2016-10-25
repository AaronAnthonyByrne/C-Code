/* Program to read a name and display it using puts(). */
#include <stdio.h>
main()
{
  char in_name[21] ; /* in_name will hold up to 20 characters + 1
                           for the terminating null character '/0'. */

  printf( "Type your name:" ) ;
  scanf( "%s", in_name ) ; /* Note that the & is not necessary. */

  printf( "Hello, " ) ;
  puts( in_name ) ;
}
