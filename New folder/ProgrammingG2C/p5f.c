/* A simple four-function calculator.                          */
/* This program demonstrates the use of the switch statement.  */
#include <stdio.h>
main()
{
  char operator ;
  float num1, num2, answer ;

  printf( "Please enter an arithmetic expression (e.g. 1 + 2) " ) ;
  scanf( "%f%1s%f", &num1, &operator, &num2 ) ;

  switch (operator)
  {
    case '+' :
      answer = num1 + num2 ;
      printf( "%f plus %f equals %f\n",num1,num2,answer ) ;
      break ;
    case '-' :
      answer = num1 - num2 ;
      printf( "%f minus %f equals %f\n",num1,num2,answer ) ;
      break ;
    case '*' :
      answer = num1 * num2 ;
      printf( "%f multiplied by %f equals %f\n",num1,num2,answer ) ;
      break ;
    case '/' :
      answer = num1 / num2 ;
      printf( "%f divided by %f equals %f\n",num1,num2,answer ) ;
      break ;
    default :
      printf( "Invalid operator\n" ) ;
    }
}
