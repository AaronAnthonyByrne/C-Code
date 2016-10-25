/*Write a program that passes an array to a function containing 5 numbers
and checks each number if it is even or odd. 
Use your function to display each number and whether it is even or odd. 
Calculate the total number of even numbers and return this number to your main() and display it. 

Name :Aaron Byrne
Date:16/02/2016
*/

#include<stdio.h>
//prototypes

int oddeven_array(int[], int);

main()
{
    int i;
    int numbers[5];
    int even;
    
    printf("Please Enter the values into the array\n");
    for(i=0; i<5; i++)
    {
        scanf("%d",&numbers[i]);
    }//end for
    
    even=oddeven_array(numbers,5);
    
    printf("\nThe number of even numbers was:%d\n",even);
   
    getchar();
    getchar();
}//end main

//implement multi_array

int oddeven_array(int temp_array[], int size)
    {
        int i;
        int counter =0;
        
        for(i=0;i<size;i++)
        {
           if(temp_array[i] % 2 == 0)
           {
               printf("\n%d is EVEN",temp_array[i]);
               counter++;
           }
           else
           {
            printf("\n%d is ODD",temp_array[i]);
           }
        }//end for
        return(counter);
    }//end multi_array()