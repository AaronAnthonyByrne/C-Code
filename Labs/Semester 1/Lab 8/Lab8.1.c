/*  Lab 8.1,,
    Showing how to Initialising 3x4 arrays.
    Using the 2 arrays create a thrid array by multiplying them
    
    Author: Aaron Byrne
    Date: 17/11/2015#
    */
    
    #include<stdio.h>
    #define ROW 3
    #define COL 4
    
    main()
    {
        
        int arrayOne[ROW][COL]  = {1,2,3,4,
                                    5,6,7,8,
                                    9,10,11,12
                                };
        int arrayTwo[ROW][COL]   = { 1,2,3,4,
                                    5,6,7,8,
                                    9,10,11,12
                                };
        int arrayThree[ROW][COL]={0};
        int i,j;
        
        
        for(i=0;i<ROW;i++)
        {
            for(j=0;j<COL; j++)
            {
                arrayThree[i][j]=arrayOne[i][j]*arrayTwo[i][j];
            }
        }
        
        for(i=0;i<ROW;i++)
        {
            for(j=0;j<COL; j++)
            {
                printf("The number at %d,%d in ArrayThree is %d \n" ,i,j,arrayThree[i][j]);
            }
        }
        getchar();
        getchar();
        
    }