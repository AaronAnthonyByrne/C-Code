/* Programming Assignment #2
     Program that will play the Lotto. The program should allow user to enter 6 numbers.
    User to be given a menu each perfomring a specific requirement.
    Program must be modularised, All tasks should be done in different functions.
    There should be a menu and each menu will be implemented by calling a function.
    Must be pointer notation ONLY.
    
    The menu:
    Option One allows the user to enter the 6 numbers. Error checking for duplicates and the number range(1-42)
    Option Two Displays the six numbers the user has entered.
    Option Three sorts the numbers into assecding order. 
                      -  I have chosen a modified bubble sorting algorithim. It is easier to sort through small array of numbers
    Option Four Displays the users winnings
    Option Five shows the frequncey of the numbers used.
    Option Six allows the user to exit the game.
    
    Name:Aaron Byrne C15709609
    Submission Date: 6/03/2016
    Operationg System. Windows 10.
    */
    
    #include<stdio.h>
    #include<stdlib.h>
    
    #define SIZE 6 //used to set the size of the array of numbers the user can enter
    #define TEMP 42 // used to store the freqreceny array variables.
    
    //prototypes- All prototypes go to different options in the menu. The expect a int return type. They pass in an array using pointer notation and the size of the array.
    //
    int option_one(int*, int);
    int option_two(int*, int);
    int option_three(int*, int);
    int option_four(int*, int);
    int option_five(int*, int);
    
    main()
    {
        char Choice =0;// Choice is the variable used in the switch case in order to select options from the menu.
        
        int Numbers[SIZE]={0};//Numbers is the name of the array which gets passed into all the functions and stores the users numbers.
        
        bool valid = false;// used to error check that the user has entered in numbers in option one before they can pick any other option.
        
        printf("**************************** Lotto ****************************\n");
        
        do
        {
            //print the menu to screen.
            printf("\n\n\t~~~~~~~~~~~~~~~~~~~~~~~~MAIN MENU~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
            printf("\n\tPlease Select an Option from the following  main menu\n"
                    "\t1. Enter Your Lotto numbers\n\t2. Display the numbers\n"
                    "\t3. Sort the numbers into increasing order. \n\t4. Check to see if you WON!\n"
                    "\t5. Display the frequency of the numbers that are entered.\n\t6. Exit the game\n\n");
            
            //take in the users option as a 1 character string.
            scanf("%1s", &Choice);
            printf("\n\n");
            
            //enter into the switch case checking to see what character the user has entered. 
                switch(Choice)
                {
                    //case 1 to implement option_one() so the user can enter in the numbers.
                    // the cases are not numeric the are characters. 
                    case '1': 
                    {
                       option_one(Numbers, SIZE);
                        
                        //after option one has been executed valid becomes true in order for the user to select options 2-5.
                        valid = true;
                        
                        break;
                        
                    }//end case 1
                    
                    //case 2 to implement option_two() so the array gets displayed on screen.
                    case '2':
                    {
                        //checking to see if the user has selcted option one first.
                        if (valid == false)
                        { 
                            printf("Error, no numbers entered");
                        }
                        
                        else
                        {
                            option_two(Numbers,SIZE);
                        }
                        
                        break;
                        
                    }//end case 2
                    
                    //case 3 to implement option_three() so the array gets sorted into asscending order.
                    case '3':
                    {
                        //checking to see if the user has selcted option one first.
                        if (valid == false)
                        { 
                            printf("Error, no numbers entered");
                        }
                        
                        else
                        {
                            option_three(Numbers,SIZE);
                        }
                        
                        break;
                        
                    }//end case 3
                    
                    //case 4 to implement option_four() to see what the user has won.
                    case '4':
                    {
                        //checking to see if the user has selcted option one first.
                        if (valid == false)
                        { 
                            printf("Error, no numbers entered");
                        }
                        
                        else
                        {
                            option_four(Numbers,SIZE);
                        }
                        
                        break;
                        
                    }//end case 4
                    
                    //case 5 to implement option_five() to check how often a number is picked
                    case '5':
                    {
                        //checking to see if the user has selcted option one first.
                        if (valid == false)
                        { 
                            printf("Error, no numbers entered");
                        }
                        
                        else
                        {
                            option_five(Numbers,SIZE);
                        }
                        
                        break;
                        
                    }//end case 5                   
                    
                    case '6':
                    {
                        printf("Thank you for playing. Hit any key to exit");
                        
                        //gethchar inserted so that the user knows that they have choosen to exit the game and that it hasn't just crashed.
                        getchar();
                        getchar();
                        
                        //when choice becomes 6 the game ends.
                        Choice=6;
                        
                        break;
                        
                    }//end case 4

                    //default for when the user enters anything other than 1-6
                    default:
                    {
                        printf("You didn't enter a valid menu input, Please try again");
                        
                    }//end default
                    
                }//end Switch statment
        
        }while(Choice!=6); //keep looping until the user chooses option 6.
        
    }//end main
    
    //implement Option One, Selecting the 6 Lotto numbers
    //numbers array passed to temp_array and the size is passed to size
    int option_one(int *temp_array, int size)
    {
        register int i,j;// register variables work faster. i and j used for looping
        
        printf("\n \t\tOption One: Picking your Lotto numbers\n\n");
        printf("Please Enter your six digits\n");
        
        //entering into a for loop to enter data into the array
        for(i=0;i<size; i++)
        {
            scanf("%d", temp_array+i);
            
            //While the program takes the input it is also error checking to make sure the numbers are within the range.
            
            if( *(temp_array+i)<1 || *(temp_array+i)>42 )
            {
                printf("Please Re-enter a valid number between 1 and 42\n");
                
                // The program then goes back to the same position in the array until a number within the range is entered.
                
                *(temp_array+i)= i--;
            }
        }
        
        //Checking through the array to check and see if there are any duplicates.
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;)
        {
            if(*(temp_array +j)== *(temp_array+i))
            {
                    printf("You have entered duplicate(s),you've enter %d, it is already chosen,\nPlease pick another number!", *(temp_array+j));
                    scanf("%d", &*(temp_array+j));
                    //While the program takes the input it is also error checking to make sure the numbers are within the range.
                
                if( *(temp_array+i)<1|| *(temp_array+i)>42)
                    {
                        
                        printf("Please Re-enter a valid number between 1 and 42\n");
                       
                        // The program then goes back to the same position in the array until a number within the range is entered.
                         *(temp_array+i)= i--;
                    }
            }
            else
            { 
                j++;
            }
        }
    }
        return(*temp_array);//returning the array back to main. Even though it is pass by reference.
    
    }//end Option_One
    
    //implement Option Two, Displaying the Lotto Numbers
    int option_two(int *temp_array, int size)
    {
        int i;
        
        printf("\n \t\tOption Two: The Chosen Lotto Numbers\n\n");
        
        printf("The Lotto Numbers you have chosen are:");
            
        //Displaying the Lotto numbers to screen
            
        for(i=0;i<size; i++)
            {
                printf("%d,",*(temp_array+i));
            }//end for
            
        return (*temp_array); // using the return to return the array
                
    }//end option_two
    
    /*implement Option Three, Displaying the Lotto Numbers in asscending order.
    This sorting algorthim is a modified bubble sort, it is easiest to sort smaller arrays.*/
    int option_three(int *temp_array, int size)
    {
        int i,j, temp;
        bool flag =1;//using a flag to make the sorting quicker

        printf("\n \t\tOption Three: Sorting the Lotto numbers\n\n");
        
        for(i=0;(i<size) && flag; i++)
        {
            flag =0;// flag is set to zero so if i doesn't enter the if statment the codition becomes false and it exits the loop.
            
            for(j=0;j<size-1; j++)
            {
                // if statment the array to see if there is a smaller number
                
                if(*(temp_array+j)> *(temp_array+j+1))
                {
                    temp = *(temp_array+j);
                    *(temp_array+j) = *(temp_array+j+1);
                    *(temp_array+j+1)=temp;
                    flag=1;
                }//end if
                
            }//end inner for
            
        }//end for
        
        printf("Numbers sorted. Please Pick Option 2 to view your sorted numbers\n");
        return (*temp_array);//return the sorted array. 
        
    }//end option_three
    
    //implement Option Four, Displaying the Lotto Prize of what the user has won.
    int option_four(int *temp_array, int size)
    {
        int i;
        int counter=0;// count the numbers that matched
        int bonus_counter=0;//see if the user picked the bonus number
        
        printf("\n \t\tOption Four: Checking your Winnings\n\n");
        
        // checking the winning numbers against the users numbers
        
        for(i=0; i<size;i++)
        {
            if(*(temp_array+i)==1||*(temp_array+i)==3||*(temp_array+i)==5||*(temp_array+i)==7||*(temp_array+i)==9||*(temp_array+i) ==11)
            {
               counter = counter ++;
                
            }//end if
            
        }//end for
        
        //checking the bonus number against the users numbers
        
        for(i=0; i<size;i++)
        {
            if (*(temp_array+i)==42)
                {
                    bonus_counter++;
                }//end inner if
            }
        
        //checking to see what the user won.
            
        if(counter==6)
        {
            printf("\nCongratulations you have won the JACKPOT!!!!\a");
        }
        
        else if(counter==5 && bonus_counter == 1)
        {
            printf("\nCongratulations you have Matched 5 plus the bonus number, you have won a New Car!!!\a");
        }
        
        else if(counter==5 && bonus_counter ==0)
        {
            printf("\nCongratulations you have Matched 5 numbers, you have won a Holiday!!!\a");
        }
        
       else if(counter==4 && bonus_counter == 1)
        {
            printf("\nCongratulations you have matched 4 numbers plus the bonus number, you have won a Weekend Away!!\a");
        }
        
        else if(counter==4 && bonus_counter == 0)
        {
            printf("\nCongratulations you have matched 4 numbers, you have won a Night Out!!\a");
        }
        
       else if(counter==3 && bonus_counter ==1)
        {
            printf("\nCongratulations you have matched 3 numbers plus the bonus number, you have won a Cinema Ticket!\a");
        }
        
        else
        {
            printf("You have not matched any numbers, Please Try again");
        }
        
        return (*temp_array);
    }//end option_four
    
    //implement Option Five, Checking the frequncey of how many times a certain number has been chosen.
    int option_five(int *temp_array, int size)
    {
        printf("\n \t\tOption Five: Frequency of numbers chosen\n\n");
        //freq_array is static so that everytime you change your array numbers it stores the frequnecy.
        static int freq_array[TEMP]={0};
        int i,j;
        
        
        //checking the frequency of the numbers in the Users_input
        for(i=0;i<size;i++)
        {
            for(j=i+1; j<TEMP+1;j++)
            {
                if(*(temp_array+i)== j)
                {
                    (*(freq_array+j))++;
                }
            }
        
        }//end for
        
        //print frequncey of each number
        printf("\nFrequncey of the numbers that appeared :\n");
        for(j=0;j<TEMP;j++)
        {
            if(*(freq_array+j)>0)
            {
                printf("%d occurs %d times\n", j, *(freq_array+j));
            }
        }
    return 0;
    }
