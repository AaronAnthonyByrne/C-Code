/* Lab for Arrays
Write a program that uses an array and  reads five numbers.
Copy the contents of this into a second array.
Display the contents of both arrays together.*/

#include<stdio.h>
# define SIZE 5    
    
    main()
    {
    
        int myarray[SIZE];
        int duparray[SIZE];
        int i; //repersents the index number in the array
        
        //enter mnumbers into array
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
        
        
        
    }//end main