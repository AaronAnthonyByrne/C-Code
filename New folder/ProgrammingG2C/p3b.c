 /* Demonstration of increment and decrement operators. */ 
 #include <stdio.h> 
 main() 
 { 
   /* Define variables and initialise them. */ 
   int var1 = 1, var2 = 2 ; 
   printf( "Initial values:\n" ) ; 
   printf( "var1 is %d and var2 is %d\n",var1,var2 ) ; 
   var1++ ; /* Increment var1. */ 
   var2-- ; /* Decrement var2. */ 
   printf( "Final values:\n" ) ; 
   printf( "var1 is %d and var2 is %d\n",var1,var2 ) ; 
 } 