/* Lab 12, Week 2 Semester 2
    Write a program that uses a function to print 10 stars (*) on a single line. Ensure you
    declare your function prototype and include adequate comments.
    Author; Aaron Byrne C15709609
    Date; 29/09/2015
    */
    
    #include<stdio.h>
    //prototype
    void stars(int); //telling the compiler what the data types are
    
    main()
    {
        int input=0;
        printf("inside main()\n");
        printf("Enter a number\n");
        scanf("%d", &input);
        
        //call the function stars
        stars(input);
        printf("\nback inside main\n");
    }
    
    //implementing the function stars
    void stars(int input)
    {
        int i;
        for(i=0; i<input; i++)
        {
            printf("*");
        }//end for
    }//end stars()
        