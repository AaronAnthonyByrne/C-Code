/* Write a program that asks the user to enter a number between 1 - 5. Your program
should display all the numbers between 1 - 20 that are evenly divisible by this
number
Author: Aaron Byrne
Student Number: C15709609
Date: 20/10/15
*/
    #include<stdio.h>
    
    main()
    {
        int user_input =0;
        int i;
        
        printf("Please enter a number between 1 and 5");
        scanf("%i",&user_input);
        
        if(user_input <1 && user_input >7)
            
        {
            printf("Please Enter a number between one and seven");
        }
        
        else
        {
            for(i=0;i<20;i++)
            {
                if(user_input % i == 0)
                {
                    printf("%i",i);
                }//end if
                else
                {
                    printf("");
                }//end else
            }//end for loop
        }//end outter else loop
    }//end main
    