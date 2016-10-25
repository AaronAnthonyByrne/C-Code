/* Lab 13.1, Week 3 Semester 2
Returning a value from a function. Write a program that uses a function to check if a
number is even or odd. Your main() should allow the user to enter any number and
this should be passed to your function. Your function should check if the number is
even or odd and return a 1 if even or a 0 if odd. Your main() should then indicate the
result.
    Author; Aaron Byrne C15709609
    Date; 09/02/2016
    */
    
    #include<stdio.h>
    
    //prototype
    void OddEven(int);
       
    main()
    {
        int UserInput; 
        int Output;
        
        printf("Please Enter a Number");
        scanf("%d", &UserInput);
        
        //call the function OddEven
        
        Output = OddEven(UserInput);
        
        printf("\n The number %d is an %d number", UserInput, Output);
        
    }//end main
    
    //implement OddEven
    
    int OddEven(int Num)
    {
        if(Num % 2 == 0)
        {
            return 1;
        }
        else
        {
            return 2;
        }
    }//end function
            
        
        
      