 /* Program to demonstrate the indirection operator * */ 
 #include <stdio.h> 
 main() 
 { 
   int  var ; 
   int *ptr ; 

   var = 1 ; 
   ptr = &var ;  /* ptr contains the address of var. */ 

   printf( "ptr contains %p\n", ptr ) ; 
   printf( "*ptr contains %d\n", *ptr) ; 
 } 
