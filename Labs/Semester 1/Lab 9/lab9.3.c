/* Lab 9.3
    a program that takes in float variables.
    then using pointers prints the adrress of the variables
    and the contents of the variables.
    author: Aaron Byrne
    Date: 24/11/2015
    */
    
    #include<stdio.h>
    
    main()
    {
        
        float input1, input2;
        float *ptr1, *ptr2;
        
        input1 = 3.55;
        input2= 5.63;
        ptr1=&input1;
        ptr2=&input2;
        
        printf("The address of input 1 is %p \n", &input1);
        printf("The address of input 2 is %p \n", &input2);
        printf("The address of ptr1 is %p \n", &ptr1);
        printf("The address of ptr2 is %p \n", &ptr2);
        
        printf("the contents of ptr1 is %p\n", ptr1);
        printf("the contents of ptr2 is %p\n", ptr2);
        
        printf("the contents of ptr1 is %f\n", *ptr1);
        printf("the contents of ptr2 is %f\n", *ptr2);
        
    
        
        
        
        getchar();
        getchar();
        }