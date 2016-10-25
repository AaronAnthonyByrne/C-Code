/*3.	Passing 1-D Array. Write a program that uses a function to calculate the average of 5 numbers
in an array. In the main(), you must ask the user to enter 5 numbers and store these in the array.
Pass the array to a function and calculate the average of these 5 numbers. 
Return the average to your main() and display this. 

Name: Aaron Byrne
Date: 16/02/2016
*/

#include<stdio.h>
//prototypes

int average_array(int[], int);

main()
{
    int i;
    int average;
    int numbers[5];
    
    printf("Please Enter the values into the array");
    for(i=0; i<5; i++)
    {
        scanf("%d",&numbers[i]);
    }//end for
    
    average=average_array(numbers,5);
    
    printf("The average value of the numbers entered is :%d",average);
   
    getchar();
    getchar();
}//end main

//implement average_array

int average_array(int temp_array[], int size)
    {
        int i;
        int average;
        int total=0;
        
        for(i=0;i<size;i++)
        {
            total=total+temp_array[i];
        }//end for
        average=total/5;
        return (average);
    }//end highest_array()