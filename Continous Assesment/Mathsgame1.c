//maths CA

#include<stdlib.h>
#include<stdio.h>

main()
{
    int Answer;
    int Choice =0;
    int RightCounter=0; 
    int WrongCounter=0;  
    int Guess =0;
    int NumQuestions=0;
    int QuestionCounter=0;
    int RoundCounter=1;

     printf("**************************** MATHS QUIZ GAME ****************************\n");
    
    do{  
         printf("\n\n");
        printf("\n\n~~~~~~~~~~~~~~~~~~~~~~~~MAIN MENU~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
        printf("\nPlease Select an Option from the following  main menu\n 1. Enter the number of questions for round %d\n 2. Start Quiz\n 3. Display the your Score for Round %d\n 4. Exit Program\n", RoundCounter, RoundCounter-1);
        
        scanf("%d",&Choice);
        
        switch(Choice)
        {
            case 1:
            
                NumQuestions=0;
            do
                    {
                        printf("\nSelect the number of Questions you would like to answer for round %d\n",RoundCounter);
                        scanf("%d",&NumQuestions);
                        
                            
                         if(NumQuestions<0||NumQuestions>5)
                            {
                                printf("\nInvaild Input! Please Enter a Number between 1 and 5\n");
                            }
                            
                            else
                            {
                                break;
                            }
                    }while(NumQuestions<0||NumQuestions>5);
                    
            case 2:
                QuestionCounter=0;
                RightCounter=0;
                WrongCounter=0;
                do
                    {
                      if (NumQuestions==0)
                        {printf("\n ERROR!! Please Select Number of questions first\n");
                         break;
                        }
                        if(NumQuestions>QuestionCounter)
                       {
                            printf("**************ROUND %d**************",RoundCounter);
                           
                            printf("\nQuestion %d:\n 10+5= ?\n",QuestionCounter+1);
                            scanf("%d",&Guess);
                            Answer = 10+5;
                           
                            
                            if( Answer == Guess)
                                {
                                    printf("\nYour answer was %d. You Answered Correct\n",Guess);
                                    RightCounter++;
                                }//end  nested if
                                
                            else
                                {
                                printf("\nYou answered %d. Your Answer is WRONG, Correct answer is %d \n", Guess, Answer);
                                WrongCounter++;
                                }//end else
                                QuestionCounter++;
                                
                            }//end if
                            
                        if(NumQuestions>QuestionCounter)//Second Question
                       {
                            printf("\nQuestion %d:\n (35*5)/7= ?\n",QuestionCounter+1);
                            scanf("%d",&Guess);
                            Answer = (35*5)/7 ;
                           
                            
                            if( Answer == Guess)
                                {
                                    printf("\nYour answer was %d. You Answered Correct\n",Guess);
                                    RightCounter++;
                                }//end nested if
                        
                            else
                                {
                                    printf("\nYou answered %d. Your Answer is WRONG, Correct answer is %d \n", Guess, Answer);
                                    WrongCounter++;
                                }//end else
                                
                                QuestionCounter ++;
                        }//end if
                        
                        if(NumQuestions>QuestionCounter)//Question Three
                       
                        {
                           printf("\nQuestion %d:\n (100*10)/(1000/100)=?\n",QuestionCounter+1);
                            scanf("%d",&Guess);
                            Answer = (100*10)/(1000/100) ;
                          
                            
                            if( Answer == Guess)
                                {
                                    printf("\nYour answer was %d. You Answered Correct\n",Guess);
                                    RightCounter++;
                                }//end nested if
                        
                            else
                                {
                                    printf("\nYou answered %d. Your Answer is WRONG, Correct answer is %d \n", Guess, Answer);
                                    WrongCounter++;
                                }//end else
                                
                                 QuestionCounter++;
                            }//end if
                            
                        if(NumQuestions>QuestionCounter)  //Question Four
                       
                        {
                            printf("\nQuestion %d:\n  (25*5)+(5*0) =?\n",QuestionCounter+1);
                            scanf("%d",&Guess);
                            Answer = (25*5)+(5*0);
                            
                            if( Answer == Guess)
                                {
                                    printf("\nYour answer was %d. You Answered Correct\n",Guess);
                                    RightCounter++;
                                }//end nested if
                                
                            else
                                {
                                    printf("\nYou answered %d. Your Answer is WRONG, Correct answer is %d \n", Guess, Answer);
                                    WrongCounter++;
                                }//end else
                                
                                QuestionCounter++;
                        }//end if
                        
                        
                        if(NumQuestions>QuestionCounter)//Question Five
                        
                        {
                            printf("\nQuestion %d: 65/5=?\n",QuestionCounter+1);
                            scanf("%d",&Guess);
                            Answer = 65/5 ;
                           
                            
                            if( Answer == Guess)
                                {
                                    printf("\nYour answer was %d. You Answered Correct\n",Guess);
                                    RightCounter++;
                                }//end  nested if
                        
                            else
                                {
                                    printf("\nYou answered %d. Your Answer is WRONG, Correct answer is %d \n", Guess, Answer);
                                    WrongCounter++;
                                }//end else
                                
                                QuestionCounter++;
                        }//end if
                        
                        RoundCounter ++;
                        
                    }while( QuestionCounter < NumQuestions);
                    break;
            
            case 3:
                
                if (NumQuestions==0)
                        {
                            printf("\nERROR!!!! Please Select Number of questions first\n");
                            break;
                        }//end if
                else
                        {
                            printf("\n+++++++++++++++++++++++++++++++++ROUND %d Score+++++++++++++++++++++++++++++++++\n",RoundCounter-1);
                            printf("\nYou answered a total of %d question, of which %d where correct and %d were wrong\n",NumQuestions, RightCounter, WrongCounter);
                        }//end else
                        
                        
                        break;
                    
            case 4:
                    printf("Thank you for playing");
                    printf("\nPress Enter Again to Exit");
                    
                    getchar();
                    getchar();
                    break;
        } //end Switch

    }while(Choice!=4);//end Do-While
    }

