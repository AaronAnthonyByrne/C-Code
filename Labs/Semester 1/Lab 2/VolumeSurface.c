/* Second week lab.(2.2)
    The volume and surface area of a box
    Author; Aaron Byrne C15709609
    Date; 29/09/2015
    */

#include <stdio.h>;
main()
{

    float l,w,h,volume,surface;
    
    h=10;
    l=11.5;
    w=2.5;
    volume= h*l*w;
    surface= (h*l)*2+(h*w)*2+(w*l)*2;
    
    printf("The volume of the rectangle is %5.2f", volume);
    printf("\nThe surface area of the rectangle is %5.2f", surface);
     
    

    
    return 0;
}