/*Lab 8.2
    Complete the program to display the elements of an array
    Author: Aaron Byrne
    Date: 17/11/2015
    */
    #include<stdio.h>
    #define ROW 4
    #define COL 6
    
    main()
    {
        int data[ROW][COL]= {3,2,5,7,4,2,
                            1,4,4,8,13,1,
                            9,1,0,2,0,0,
                            0,2,6,3,-1,-8
                            };
        int i,j;
        int total=0;
        
        for(i=0;i<ROW;i++)
        {
            for(j=0;j<COL;j++)
            {
                total=total+data[i][j];
            }
        }
        
        printf("The sum of the elements in the array are %d",total);
        getchar();
        getchar();
    }