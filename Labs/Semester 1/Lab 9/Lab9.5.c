/* Lab 9.5
    Entering data into two floating point arrays
    using pointer notation.
    Author: Aaron
    Date: 24/11/2015
    I*/
    
    #include<stdio.h>
    # define SIZE 3
    main()
    
    {
        int array1[SIZE], array2[SIZE];
        int i; 
        
        //enter data into the first array
        
        printf("Please enter data into the array\n");
        
        for (i =0; i<SIZE; i++)
        {
            scanf("%d\n", &*(array1+i));
        }
        
        //copying from array1 into array2
        for (i =0; i<SIZE; i++)
        {
            *(array2+i)= *(array1+i);
        }
        
        //display array 1
        for (i =0; i<SIZE; i++)
        {
            printf("%d\n", *(array1+i));
        }
        
        //display array2
        for (i =0; i<SIZE; i++)
        {
            printf("%d\n", *(array2+i));
        }
        
        getchar();
        getchar();
        getchar();
    }