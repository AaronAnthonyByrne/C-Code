 /* Program to demonstrate the difference between static  
    and auto variables.                                 */ 
 #include <stdio.h>
 main() 
 { 
   void any_func( void ) ;
   int i ; 

   /* Call the function any_func ten times. */ 
   for ( i = 0 ; i < 10 ; i++ )
   {
     any_func() ;
   }
 }
 
void any_func() 
 { 
   int auto_var = 0 ; 
   static int static_var = 0 ; 

   static_var++ ;  /* Increment the static variable. */ 
   auto_var ++ ;   /* Increment the auto   variable. */ 
   printf( "auto_var = %d  static_var = %d\n",auto_var,static_var );
 } 
