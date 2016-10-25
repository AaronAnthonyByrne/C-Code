/* Float Program
    Third Week Lab(3.4)
    Author; Aaron Byrne C15709609
    Date; 06/10/2015*/
#include <stdio.h>
main()
{
    float Num1;
    float Num2;
    float Num3;
    
    printf("Please Enter your first number\n");
    scanf("%f",&Num1);
    printf("\nPlease Enter your second number\n");
    scanf("%f",&Num2);
    printf("\nPlease Enter your third number\n");
    scanf("%f",&Num3);
    
    printf("\nThe first number correct to four decimal places %3.4f", Num1);
    printf("\nThe second number correct to three decimal places %3.3f", Num2);
    printf("\nThe third number correct to zero decimal places %3.0f", Num3);
    
    getchar();
    getchar();
    getchar();
    getchar();
    
}//end main
    