/* Lab 6.3
Write a program that will allow the user to enter 4 numbers into this array and then display these on the screen in the same order
they were entered. Your program must then swap the 1st and 2nd numbers in the array
and swap the 3rd and 4th numbers in the array. Now your program must display the
numbers on the screen using this new order.

Authour:Aaron Byrne
Sudent Number: C15709609
Date 3/11/15
*/

#include<stdio.h>
#define SIZE 4

    main()
    {
        int original_array[SIZE];
        int i,temp;
        
        printf("Please enter your %d numbers\n",SIZE);
        
        for(i=0;i<SIZE;i++)
        {
            scanf("%d",&original_array[i]);
        }
        
        for(i=0;i<SIZE;i++)
        {
            printf("\n%d",original_array[i]);
        }
        
        for(i=0; i<SIZE; i++)
        {
         temp= original_array[i];
            original_array[i+1]= temp;
            
            
            printf("%d",temp);
        }
        
        getchar();
        getchar();
    }
    