/* Lab 9.4
    progarm to add two numbers using pointers
    Author: Aaron Byrne
    Date: 24/11/2015
    */
    
    #include<stdio.h>
    
    main()
    {
        
        int num1, num2, sum;
        int *ptr1, *ptr2, *ptr3;
        
        
        printf("Enter two numbers to add\n");
        scanf(" %d %d", &num1, &num2);
        
        
        ptr1= &num1;
        ptr2= &num2;
        
        
        sum = *ptr1 + *ptr2;
        
        ptr3= &sum;
        
        printf("\n %d + %d = %d", *ptr1, *ptr2, *ptr3);
        
        getchar();
        getchar();
    }