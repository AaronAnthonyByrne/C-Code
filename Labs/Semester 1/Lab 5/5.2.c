/* Program to compute the following
    if the number is even, halve it
    if it is odd, multiply by 3 and add 1*/
    
#include <stdio.h>
main()

{
    int UserInput, steps;
    
    steps= 0;
    
    printf(" Please Enter a Inital  Positive Value \n");
    scanf("%d",&UserInput);
    printf("\n Inital Value is: %d \n", UserInput);
   do {
         
        if(UserInput < 0)
        { 
            printf("\n Error Please enter a positive whole number\n");
            scanf("%d",&UserInput);
            }//end if
        if( UserInput % 2 )
        {
          UserInput = (UserInput*3) + 1 ;
           
        }//end if
        else
        {
            UserInput = UserInput/ 2;
           

        }    //end else
        steps ++;
        printf("\n Next value is : %d \n", UserInput);
    }
        while(UserInput !=1);
        
            printf(" \nFinal value 1, the number of steps %d", steps);
        getchar();
        getchar();
        }
    