/*Lab 8.3
    Using a 3x2 you must enter the values.
    Then Calculate the sum of the individual rows
    Calulate the sum of the individual columns
    Then find the highest number in the array
    
    Author: Aaron Byrne
    Date: 17/11/2015
    */
    #include<stdio.h>
    #define ROW 3
    #define COL 2
    
    main()
    {
        int array[ROW][COL];
        int i,j;
        int col1_sum, col2_sum, row1_sum,row2_sum,row3_sum;
        printf("Please enter values into the array");
       
        for(i=0;i<ROW;i++)
        {
            for(j=0;j<COL;j++)
            {
                scanf("%d",&array[i][j]);
            }
        }
        
        for(j=0;j<COL;j++)
            {
                col1_sum=col_sum1+ array[0][j];
            }
        for(j=0;j<COL;j++)
            {
                col1_sum=col_sum1+ array[1][j];
            }
        for(j=0;j<COL;j++)
            {
                col1_sum=col_sum1+ array[2][j];
            }
        
    }