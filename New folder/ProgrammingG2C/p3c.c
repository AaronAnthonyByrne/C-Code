/* Demonstration of pre-increment and post-increment. */ 
 #include <stdio.h> 
 main() 
 { 
   int var1, var2, var3, var4 ; 
   var1 = var2 = 1 ; 
   var3 = var1++ ; /* post-increment: var3 is 1, var1 is 2  */
   var4 = ++var2 ; /* pre-increment : var4 is 2, var2 is 2  */
   printf( "var1 is %d, var2 is %d\n", var1, var2 ) ;
   printf( "var3 is %d, var4 is %d\n", var3, var4 ) ;
 }
