/* Write a program using a while loop to print out the numbers 1 - 10 in descending
order on the same line and each number is separated by a comma (e.g.
1,2,3,4,5,6,7,8,9,10)
Author: Aaron Byrne
Student Number: C15709609
Date: ??/??/??
*/
    
    
#include <stdio.h>
main()
{
    int num;
    

    num=10;
    
    while(num > 0)
    {
        printf("%d, ",num);
        num --;
    }

getchar();    
}

    