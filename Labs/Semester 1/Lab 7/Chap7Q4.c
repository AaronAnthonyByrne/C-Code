/*Lab 7.3
    Chapter7Q4
    */
    
    #include<stdio.h>
    #define SIZE 15
    main()
    
    {
        int i;
        int NumArray[SIZE]={0};
        
        
        //enter data into the array 
        printf("enter numbers into the array\n");
        for(i=0; i<SIZE; i++) 
            { 
                scanf("%d", &NumArray[i]);
            }
            
        for(i=0; i<SIZE; i++) 
            { 
                printf("\n%d ", NumArray[i]);
            }
            printf("\n");
        for(i=0; i<SIZE; i++) 
            { 
                printf(" %d ", NumArray[i]);
            }
            printf("\n");
        for(i=SIZE-1; i>=0; i--) 
            { 
                printf(" %d ", NumArray[i]);
            }
            
            getchar();
            getchar();
    }//end main
    
    