 /* Program to demonstrate simple keyboard input
    and screen output.                         */
 #include <stdio.h> 
 main() 
 { 
   int var ;
   printf( "Please type a number: " ) ; 
   scanf( "%d", &var ) ; 
   printf( "\nThe number you typed was %d\n", var ) ;
 } 
