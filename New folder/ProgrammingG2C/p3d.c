/* Program to demonstrate a mixed data type expression. */
#include <stdio.h>
main()
{
  int var1 = 10 ;
  float var2 = 2.5 ;
  float var3 ;
  int var4 ;
  float var5 ;
  var3 = var1 / var2 ; /* Mixed expression assigned to a float     */
  var4 = var1 / var2 ; /* Mixed expression assigned to an int      */
  var5 = var1 / 4 ;    /* Non-mixed expression assigned to a float */
  printf( "var3 = %f   var4 = %d   var5 = %f\n", var3, var4, var5 ) ;
}
