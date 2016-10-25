 /* Program to demonstrate dynamic memory allocation 
    using calloc().                                  */ 
 #include <stdio.h> 
 #include <stdlib.h> 
 main() 
 { 
   float *float_array ; 
   int no_els, i ; 

   printf( "Enter the number of elements " ) ; 
   scanf( "%d", &no_els ) ;
 
   /* Allocate no_els each of size sizeof(float) and 
      initialise all elements to 0 */ 
   float_array = (float *) calloc( no_els, sizeof(float) ) ; 
   /* Note difference between calloc() and malloc(). */ 
   if ( float_array == NULL ) 
     printf( "cannot allocate memory" ) ; 
   else 
   { 
     /* Display the contents of the memory just allocated. */ 
     for ( i = 0; i < no_els; i++ ) 
       printf( "Element %d is %.1f\n", i, *(float_array+i) ) ; 

     free( float_array ) ; /* Free the allocated memory. */
   } 
 }
