/* Program that passes by reference.
Write a program that uses 2 functions (1 function to calculate the area of a Square, 
another function to calculate the area of a Circle). 
Declare a variable in your main for the length of a side of the Square and 
another variable for the Radius of the Circle. 
Ask the user to enter these values.
Using Pass by Reference, pass these as parameters to the separate functions, 
calculate the areas of the Square and Circle in their separate function, 
and display the results in your main(). Remember, you must use Pass by Reference. 
Do not forget to declare 2 prototypes for your 2 functions. 
You can assume the value of pi = 3.14 
Name: Aaron Byrne
Date 16/02/2016
*/

#include<stdio.h>

//prototypes
float square_area(int);
float circle_area(int);

main()
{
    int length=0;
    int radius =0;
    float c_area=0;
    float s_area=0;
    
    
    printf("please enter the length of the square\n");
    scanf("%d", &length);
    printf("\nPlease enter the radius of the circle\n");
    scanf("%d", &radius);
    
    //call the functions
    s_area=square_area(length);
    c_area=circle_area(radius);
    
    printf("\The area of the square is %.1f",s_area);
    printf("\n The area of a circle is %.1f",c_area);
    
    getchar();
    getchar();
    flushall();
}// end main

//implement the square_area

float square_area(int sq_length)
{
    
    float area=0;
    area= sq_length*sq_length;
    return(area);
}//end square_area()

//implement circle_area

float circle_area(int cir_radius)
{
    float area=0;
    area=3.14*(cir_radius*cir_radius);
    return(area);
}//end circle_are