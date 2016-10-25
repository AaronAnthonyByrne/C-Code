 /* Opening and closing a file in a C program.  */ 
 #include <stdio.h> 
 main() 
 { 
   FILE *fp ;     /* fp is a pointer to a file. */

   /* Open the file named file.txt for readin. */ 
   fp = fopen( "file.txt", "r" ) ; 
   /* If unable to open the file - fp is NULL.  */ 
   if ( fp == NULL ) 
     puts( "Error in opening file.txt" ) ; 
   else 
   { 
     puts( "file.txt is successfully opened" ) ; 
     fclose( fp ) ; 
   } 
 } 
