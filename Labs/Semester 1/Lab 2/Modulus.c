/* Second week lab.(2.4)
    Modulus
    Author; Aaron Byrne C15709609
    Date; 29/09/2015
    */

#include <stdio.h>;
main()
{
    int remainder;
    
    remainder = 2%2;
    printf("The remainder of 2 mod 2 is %d",remainder);
    remainder = 3%2;
    printf("\nThe remainder of 3 mod 2 is %d",remainder);
    remainder = 5%2;
    printf("\nThe remainder of 2 mod 2 is %d",remainder);
    remainder = 7%3;
    printf("\nThe remainder of 7 mod 3 is %d",remainder);
    remainder = 100%33;
    printf("\nThe remainder of 100 mod 33 is %d",remainder);
    remainder = 100%7;
    printf("\nThe remainder of 100 mod 7 is %d",remainder);
    
    return 0;
}//end main