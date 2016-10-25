/* Program to demonstrate external variables. */
#include <stdio.h>
int page_len = 66 ;
char *company = "ABC & Company Ltd" ;

main()
{
  void funct1( void ) ;
  void funct2( void ) ;

  printf( "In main\n" ) ;
  printf( "page_len=%d  company = %s\n\n", page_len, company ) ;

  funct1() ;
  funct2() ;
}

void funct1()
{
  extern int page_len ;
  extern char *company ;
  printf( "In function 1\n" ) ;
  printf( "page_len=%d  company = %s\n\n", page_len, company ) ;
}

void funct2()
{
  printf( "In function 2\n" ) ;
  printf( "page_len=%d  company = %s\n", page_len, company ) ;
}
