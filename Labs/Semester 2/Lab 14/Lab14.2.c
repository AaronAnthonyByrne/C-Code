/*Passing 1-D Array. Write a program that uses a function to find the highest number in an array
containing 5 numbers. In the main(), you must ask the user to enter 5 numbers and store these 
in the array. Pass the array to a function and your function must find the highest number. 
Return this number to your main() and display it. 

Name: Aaron Byrne
Date: 16/02/2016
*/

#include<stdio.h>
//prototypes

int highest_array(int[], int);

main()
{
    int i;
    int highest =0;
    int numbers[5];
    
    printf("Please Enter the values into the array");
    for(i=0; i<5; i++)
    {
        scanf("%d",&numbers[i]);
    }//end for
    
    highest=highest_array(numbers,5);
    
    printf("The highest value enter was %d",highest);
   
    getchar();
    getchar();
}//end main

//implement Highest_array

int highest_array(int temp_array[], int size)
    {
        int i=0;
        int high =0;
        
        for(i=0;i<size;i++)
        {
            if(high < temp_array[i])
            {
                high=temp_array[i];
            }//end if
            
        }//end for
        return (high);
    }//end highest_array()