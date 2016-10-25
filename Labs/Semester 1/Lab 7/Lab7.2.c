/* Program using a 2-D array

*/

#include <stdio.h>

#define ROW 3

#define COL 2

main() 
{ 
    int matrix[ROW][COL];
    int i,j; 
    int Highest, Lowest;
    
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
                printf("You entered number %d into the array\n",matrix[i][j]);
            }//end inner for 
    }//end for

    Highest= matrix[0][0];
    Lowest= matrix[0][0];

    for(i=0; i < ROW; i++) 
    { 
        for(j=0; j < COL; j++) 
        {
            if(Highest < matrix[i][j]) 
            
            { 
                Highest= matrix[i][j];
            }//end if 
            
            if(Lowest > matrix[i][j])
            { 
                Lowest = matrix[i][j];
            }//end if 
                
        }//end for
    }                

    printf("\n Highest value is %d",Highest);

    printf("\n Lowest value is %d",Lowest);
    
    printf("\n The Average of the numbers is:", 
    getchar();
    getchar();
}//end main