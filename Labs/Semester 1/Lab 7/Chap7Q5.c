/* Program using a 2-D array
    */
    
    #include <stdio.h>
    #define ROW 5
    #define COL 5
    
    main() 
    
    { 
        int matrix[ROW][COL];
        int i,j; 
        
            //enter data into the array 
    printf("enter numbers into the array\n");
    for(i=0; i<ROW; i++) //i represents row and j represents the column 
    {        
        for(j=0; j<COL; j++) 
            {
                scanf("%d", &matrix[i][j]);
            }//end inner for 
    }//end for
    for(i=0; i<ROW; i++) //i represents row and j represents the column 
    {        
        for(j=0; j<COL; j++) 
            {
            printf("When you multipy %d and %d you get %d",matrix[i], matrix[j]);
                i++;
            }//end inner for 
    }//end for
}

