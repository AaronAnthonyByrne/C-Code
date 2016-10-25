/* Lab 6.4
Write a program that defines an integer array with 5 elements. Your program must do
the following:
a) read in 5 values into the array
b) define another integer array with 5 elements and copy the values from the 1st
array into the second array in reverse order (e.g. the number in the first
element of the 1st array will be in the last element in the 2nd array, etc..).

Authour:Aaron Byrne
Sudent Number: C15709609
Date 3/11/15
*/

#include <stdio.h>
#define SIZE 5

    main()
    {
        int number_array[SIZE];
        int reverse_array[SIZE];
        int i;
        int j=SIZE-1;
        
        printf("please Enter %d numbers\n",SIZE);
        
        for(i=0;i<SIZE;i++)
        {
            scanf("%d",&number_array[i]);
        }
        
        for(i=0; i< SIZE; i ++)
        {
            
            
            reverse_array[i]= number_array[j];
            
            j--;
        }
        
        for(i=0; i<SIZE; i ++)
        {
            printf("\n %d",reverse_array[i]);
        }

        getchar();
        getchar();
    }