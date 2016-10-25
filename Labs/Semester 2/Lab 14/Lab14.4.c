/* Passing 1-D Array. Make a copy of Q2 above but this time, use your function to change 
the contents of the array, i.e. multiply each number in the array by 2. 
When your function has finished and your program continues in your main(), 
print the contents of your array in your main() and see if the changes made to the contents of the 
array in your function can be seen. If not, why? 

This works because it is an array.

Name :Aaron Byrne
Date: 16/02/2016
*/
#include<stdio.h>
//prototypes

int multi_array(int[], int);

main()
{
    int i;
    int numbers[5];
    
    printf("Please Enter the values into the array\n");
    for(i=0; i<5; i++)
    {
        scanf("%d",&numbers[i]);
    }//end for
    
  multi_array(numbers,5);
    
    for(i=0; i<5; i++)
    {
        printf("%d\n",numbers[i]);
    }//end for
   
    getchar();
    getchar();
}//end main

//implement multi_array

int multi_array(int temp_array[], int size)
    {
        int i;
        
        for(i=0;i<size;i++)
        {
           temp_array[i]=temp_array[i]*2; 
        }//end for

    }//end multi_array()