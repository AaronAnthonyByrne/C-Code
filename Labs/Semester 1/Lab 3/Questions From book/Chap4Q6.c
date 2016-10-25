/* Chap4Q6
    Third Week Lab(3.10)
    Author; Aaron Byrne C15709609
    Date; 06/10/2015*/
    
#include <stdio.h>

main()
{
    float Fahrenheit, Celsius;
    
    printf("Enter a tempeture in degrees Fahrenheit:");
    scanf("%f",&Fahrenheit);
    
    Celsius=(Fahrenheit-32.0)*(5.0/9.0);
    
    printf("The %5.2f in Fahrenheit is equal to %5.2f in Celsius",Fahrenheit,Celsius);
    
    
    getchar();
    getchar();
    
    }
    

    
    