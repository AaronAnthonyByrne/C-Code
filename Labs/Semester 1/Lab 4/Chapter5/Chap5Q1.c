/* Converting a if else to a Switch
    Fourth Week Lab(4.2)
    Author; Aaron Byrne C15709609
    Date; 13/10/2015 */
    
#include <stdio.h>

main()
{
    char marriage_status;
    
    printf("Please Enter your marital status\n");
    scanf("%1s", &marriage_status);
    
    switch(marriage_status)
    {
        case'S':
            printf("Single");
            break;
        case'M':
            printf("Married");
            break;
        case'w':
            printf("Widowed");
            break;
        case'E':
            printf("Seperated");
            break;
        case'D':
            printf("Divorced");
            break;
        default:
            printf("Please enter an upper case S for single, M for married, W for Widowed, E for serperated, D for Divorced");
    }
getchar();
getchar();
}    