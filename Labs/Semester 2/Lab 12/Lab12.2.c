/* Lab 12.2, Week 2 Semester 2
Write a program that uses a function with 2 parameters (a character and an integer,
e.g. function_name(char, int). Your function must display the character parameter a
certain number of times on one line where this number is the integer parameter.
    Author; Aaron Byrne C15709609
    Date; 02/01/2016
    */
    
    #include<stdio.h>
    
    //prototype
    void amper(int, char);
    
    main()
    {
        int input=0;
        char mychar;
        
        printf("Inside main()\n");
        printf("Enter a number\n");
        scanf("\n%d", &input);
        printf("Enter a character\n");
        scanf("\n%cv", &mychar);
        
        //call function amper
        amper(input,mychar);
        printf("\nback inside main()");
    }//end main
    
    //implement function amper
    void amper(int num, char mychar)
    {
        int i;
        for(i=0; i<num;i++)
        {
            printf("%c", mychar);
        }//end for
    } //end function amper
    