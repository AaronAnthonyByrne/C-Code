/* Continuous Assesment
    Leap Year Calculator
    Authour:      Aaron Byrne
    Student #;  C15709609
    Date:           27/10/2015
    */
    
    
    #include<stdio.h>
    main()
    {
        
        int year;
        
        printf("Please Enter a year to see if it is a Leap year\n");       //asking for user input
        scanf("%d", &year);                                                // storing user input in year
        
        if(year %100 == 0 && year %400 == 0) //if it is divisible by 100, unless it is ALSO divisible by 400. e.g year 4000              
        {
           printf("\n %d is a Leap Year", year);
        }//end if
            
            else
                if(year %100 == 0)//if it is divisible by 100 it is not a leap Year. e.g year 3000
                {
                    printf("\n %d is not a Leap Year",year);
                }//end else if
        
            else 
                if( year %4 == 0) // any year that is evenly divisible by 4 is a Leap Year. e.g year 1616
                {
                    printf("\n %d is a Leap Year", year);
                }//end  else if
                
            else 
                if( year %4 != 0) // therefore any year that is not evenly divisible by 4 is not a Leap Year e.g. year 1989
                {
                    printf("\n %d is a not Leap Year", year);
                }//end  else if
                
                else //not really needed but just in case someone from Trinity uses this calcualtor.
                    {
                        printf("You did not enter a valid year, Please try again.");
                    }// end else
        getchar();
        getchar();
        
    }//end main