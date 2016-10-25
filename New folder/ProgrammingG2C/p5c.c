/* Program to demonstrate the use of braces to form a
    compound statement.                               */
#include <stdio.h>
main()
{
  float account_balance,interest ;
  float overdraft_rate = 10.0 ;

  printf( "What is your account balance? " ) ;
  scanf( "%f", &account_balance ) ;

  if ( account_balance < 0 )
  {
    printf( "Your account is in the red\n" ) ;
    interest = -account_balance * overdraft_rate / 100.0 ;
    printf( "The overdraft charge is %6.2f\n",interest ) ;
  }
  else
  {
    printf( "Your account is in the black\n" ) ;
    printf( "There is no overdraft charge\n" ) ;
  }
}
