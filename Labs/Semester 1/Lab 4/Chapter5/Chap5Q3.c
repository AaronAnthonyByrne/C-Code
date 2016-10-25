/* Check if two intergers are divisible by each other
    Fourth Week Lab(4.3)
    Author; Aaron Byrne C15709609
    Date; 13/10/2015 */
    
#include <stdio.h>

main()
{
    int Num1, Num2;
    
    
    printf("Please enter two numbers\n");
    scanf("\n%d%d", &Num1, &Num2);

    
        if( Num1 % Num2 == 0)
            printf("The second number is a factor of the first");
        
        else
            printf("The second number is not a factor of the first");
            
getchar();
getchar();
    
}
