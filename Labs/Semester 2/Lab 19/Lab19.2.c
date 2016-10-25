/* Program that takes in two corners of a rectangle and some other point. 
The program need to tell the user if the point is inside or outside the recatangle.

Lab19.2

Author: Aaron Byrne
Date: 14/04/2016
*/
#include<stdio.h>


main()
{
    int x1,y1,x2,y2,userx,usery;
    
    printf("Enter x,y for top left :");
    scanf("%d" "%d",&x1,&y1);
    
    printf("Enter x,y for bottom right :");
    scanf("%d %d",&x2,&y2);
    
    printf("Enter x,y for point:");
    scanf("%d %d", &userx,&usery);
    
    if(userx>x1 && userx<x2)
    {
        if(usery<y1 && usery>y2)
        {
            printf("(%d %d) is in the rectangle",userx,usery);
        }//end if
        
        else
        {
            printf("(%d %d) is outside the rectangle",userx,usery);
        }//end else
        
        
        
    }//end if
     else
        {
            printf("(%d %d) is outside the rectangle",userx,usery);
        }//end else
        
        getchar();
        getchar();
}//end main