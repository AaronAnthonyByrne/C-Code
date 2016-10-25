/* Lab 6.1 
Program that uses an array to read in  numbers.
Copys he conent into a second array

Authour:Aaron Byrne
Sudent Number: C15709609
Date 3/11/15
*/

#include<stdio.h>
# define SIZE 5    
    
    main()
    {
    
        int myarray[SIZE];
        int duparray[SIZE];
        int i; //repersents the index number in the array
        
        //enter numbers into array
        //
        
        printf("Enter your %d numbers\n", SIZE);
        for(i=0; i<SIZE; i ++)
        {
            
            scanf("%d", &myarray[i]);
        }
        
        //copying contents of myarrya into duparray
        //
        
        for(i=0; i< SIZE; i ++)
        {
            duparray[i]= myarray[i];
        }
        
        //display contents of both arrays
        //
        
        for(i=0; i<SIZE; i ++)
        {
            printf("\n %d and %d",myarray[i], duparray[i]);
        }
        
        getchar();
        getchar();
        
    }//end main