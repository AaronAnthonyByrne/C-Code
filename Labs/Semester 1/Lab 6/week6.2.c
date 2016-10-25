/* Lab 6.2 
Program that allows the user to input 3 temperaure readings in fahrenheit.
Display to the screen their Fahernhei and Celcius tem
Authour:Aaron Byrne
Sudent Number: C15709609
Date 3/11/15
*/

#include <stdio.h>
#define SIZE 3

    main()
    {
        int i;
        int temp_array[SIZE];
        int celcius;
        
        printf("Please enter your %d tempetures in Fahernheit\n", SIZE);
        
        for(i=0;i<SIZE;i++)
        {
            scanf("%d",&temp_array[i]);
        }
        
        for(i=0;i<SIZE;i++)
        {
            printf("\n %d Fahernheit",temp_array[i]);
            
            celcius= (temp_array[i] - 32.0)*(5.0/9.0);
            
            printf(" is equal to %d Celcius",celcius);
            
        }
        
        getchar();
        getchar();
    }