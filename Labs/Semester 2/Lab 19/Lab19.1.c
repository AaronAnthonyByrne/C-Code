/* Program that uses two 1-d arrays. One array will contain euro and the second will contain the Dollar
equivlant. 

Lab19.1

Author: Aaron Byrne
Date: 14/04/2016
*/
#include<stdio.h>

#define SIZE 5

main()
{
    float dollar[SIZE];
    float euro[SIZE];
    int i;
    
    printf("Please enter the euro values\n"); 
    for(i=0;i<SIZE;i++)
    {
        scanf("%f",&euro[i]);
    }
    
    for(i=0;i<SIZE;i++)
    {
        dollar[i]=euro[i] * 1.05;
    }
        
    for(i=0;i<SIZE;i++)
    {
        printf("Euro %.2f is $%.2f\n", *(euro+i), *(dollar+i));
    }
    
    getchar();
    getchar();
    
}//end main