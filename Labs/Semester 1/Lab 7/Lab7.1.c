/* Program to help find what is stored in a[8]
Labs7.1
Authour: Aaron Byrne
Student Number: C15709609
Date:                   10/11/15
*/

#include<stdio.h>
#define SIZE 10
main()

{
 
    int a[i]={0};
    
    
    for (int i = 0; i < SIZE; i++)
        {
            a[i] = 9 - i;
        }
           
    for (int i = 0; i < SIZE; i++)
        {
            a[i] = a[ a[i] ];
        }
        
  printf("In position a[8] is %d ",a[8]);
    
    getchar();
    getchar();
}//end main