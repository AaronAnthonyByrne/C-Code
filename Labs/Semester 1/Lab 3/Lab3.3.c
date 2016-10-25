/*Odd and Even Program
    Third Week Lab(3.3)
    Author; Aaron Byrne C15709609
    Date; 06/10/2015*/
#include <stdio.h>
main()
{
    int Num1;
    
    printf("Enter a Number between 1 and 100\n");
    scanf("%d", &Num1);
    getchar();
    
    if (Num1 % 2 == 0)
    {
        printf("\nNumber %d is Even", Num1);
    }   
    else if (Num1 % 2 == 1)
    {
        printf("\nNumber %d is Odd", Num1);
    }
    
    else 
    {
        printf("\nYou didn't enter a number between 1 and 100");
    }//end else
    
    getchar();
}//end main