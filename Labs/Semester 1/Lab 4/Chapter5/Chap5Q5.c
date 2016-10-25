/* Check if two side of a triangle are bigger than the third
    Fourth Week Lab(4.4)
    Author; Aaron Byrne C15709609
    Date; 13/10/2015 */
    
#include <stdio.h>

main()
{
    int side1,side2,side3;
    
    printf("Please enter the three sides of the triangle\n");
    scanf("%d %d %d", &side1, &side2, &side3);
    
    
    if ( (side1 + side2) > side3)
    {
        printf("This is a valid triangle");
        
    }//end if
    else if ( (side2 + side3) > side1)
    {
        printf("This is a valid triangle");
    }//end if else
    else if ( (side3 + side1) > side2)
    {
        printf("This is a valid triangle");
    }//end if else
    else
    {
    printf("This is not a valid trianlge");}
    //end else

    getchar();
    getchar();
    
    }//end main