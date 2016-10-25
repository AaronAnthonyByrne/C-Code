/* Lab 12.3, Week 2 Semester 2
Write a program that uses a function to find the highest and lowest number of 3
values. These 3 values must be passed as parameters to the function, i.e.
function_name(int, int, int).
    Author; Aaron Byrne C15709609
    Date; 02/01/2016
    */
    
    #include<stdio.h>
    
    //prototype
    void highlow(int,int,int);
        int High=0; 
        int Low=0; 
    main()
    {
        int Num1=0; 
        int Num2=0; 
        int Num3=0;
        
        printf("Please Enter your first number\n");
        scanf("%d",&Num1);
        printf("Please Enter your second number\n");
        scanf("%d",&Num2);
        printf("Please Enter your third number\n");
        scanf("%d",&Num3);
        
        //call function highlow
        highlow(Num1,Num2,Num3);
        printf("Highest Number is :%d \nLowest Number is :%d", High, Low);
        
    }//end main
    
    //implement function highlow
    void highlow(int Num1, int Num2, int Num3)
    {
        
        if(Num1>Num2 && Num1>Num3)
        {
            High = Num1;
        }
        else if(Num2>Num1 && Num2>Num3)
        {
            High = Num2;
        }
        else
        {
            High = Num3;
        }
        if(Num1<Num2 && Num1<Num3)
        {
            Low = Num1;
        }
        else if(Num2<Num1 && Num2<Num3)
        {
            Low = Num2;
        }
        else
        {
            Low = Num3;
        }
    }//end function highlow