/* Lab 12.4, Week 2 Semester 2
Write a program that uses 2 functions called sum() and average(). Your program must
ask the user to enter 3 numbers inside the main(). Your main() should then pass these
3 values as parameters to the function sum(). This function should calculate the sum
of the 3 numbers. Your function sum() should then pass the sum of the 3 numbers as a
parameter to the function average(). The function average() should then calculate the
average of the 3 numbers and display this on the screen.
    Author; Aaron Byrne C15709609
    Date; 02/01/2016
    */
    
    #include<stdio.h>
    //prototypes
    void sum(int, int, int);
    void average(int);
    
    main()
    {
        int Num1=0;
        int Num2=0;
        int Num3=0;
        printf("Please Enter your first number\n");
        scanf("%d", &Num1);
        printf("Please Enter your second number\n");
        scanf("%d", &Num2);
        printf("Please Enter your third number\n");
        scanf("%d", &Num3);
        
        //call function sum()
        sum(Num1, Num2, Num3);
        
    
        
    }//end main
    
    //implementation of function sum()
    
    void sum(int Num1, int Num2, int Num3)
    {
       int total =0;
        total = Num1+Num2+Num3;
        
        printf("The addition of the three numbers is : %d", total);
        
        //call function average()
        average(total);
    }//end sum
    
    //implement average
    void average(int total)
    {
        int avg =0;
        avg= total/3;
        
        printf("\nThe average of the three numbers is : %d", avg);
    }//end average