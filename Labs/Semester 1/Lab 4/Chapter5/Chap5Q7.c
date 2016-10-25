/* A program that takes a numeric value 1-7 and outputs a day of the week.
    Fourth Week Lab(Chapter 5 Question7)
    Author; Aaron Byrne C15709609
    Date; 13/10/2015 */
    
    #include<stdio.h>
    
    main()
    {
        int days;
        
        printf("Please enter a number between 1 and 7");
        scanf("%d",&days);//asking a user for a number between one and seven and storing it in days
        
        //using a switch statment to corespond the days entered.
        switch(days)
        {
            case 1:
            {
                printf("Sunday");
                break;
            }
            case 2:
            {
                printf("Monday");
                break;
            }
            case 3:
            {
                printf("Tuesday");
                break;
            }
            case 4:
            {
                printf("Wednesday");
                break;
            }
            case 5:
            {
                printf("Thursday");
                break;
            }
            case 6:
            {
                printf("Firday");
                break;
            }
            case 7:
            {
                printf("Saturday");
                break;
            }
            default:
            {
                printf("Invalid input");
                break;
            }
        }//end switch
    }//end main