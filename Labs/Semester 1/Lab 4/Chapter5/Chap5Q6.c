/* Read a single numerical value and display the value as a word.
    Fourth Week Lab(Chapter 5 Question6)
    Author; Aaron Byrne C15709609
    Date; 13/10/2015 */
    
    #include<stdio.h>
    
    main()
    {
        int number;
        
        printf("Please enter a numerical value");
        scanf("%d",&number);
        
        switch(number)
        {
            case 1:
            {
                printf("ONE");
                break;
            }
             case 2:
            {
                printf("TWO");
                break;
            }
             case 3:
            {
                printf("THREE");
                break;
            }
             case 4:
            {
                printf("FOUR");
                break;
            }
             case 5:
            {
                printf("FIVE");
                break;
            }
             case 6:
            {
                printf("SIX");
                break;
            }
             case 7:
            {
                printf("SEVEN");
                break;
            }
             case 8:
            {
                printf("EIGHT");
                break;
            }
             case 9:
            {
                printf("NINE");
                break;
            }
             case 0:
            {
                printf("ZERO");
                break;
            }
            default:
            {
                printf("You did not enter a numeric value");
            }
        }//end switch
        
    }//end main
            
            