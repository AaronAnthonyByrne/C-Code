/* question 2 Lab 7
*/
    #include<stdio.h>
    #define ROW 3
    #define COL 2
    
    main()
    {
        int myarray[ROW][COL];
        int i,j;
        int highest;
        int lowest;
        int sum =0;
        float average;
        
        printf("Please Enter number to enter into the array\n");
        //entering data into the array
        
        for(i=0; i<ROW; i++)
        {
            for(j=0; j<COL; j++)
            {
                scanf("%d", &myarray[i][j]);
            }//exit innner for loop
            
        }  //exit outer for loop
        
        //displaying the array
        
        for(i=0; i<ROW; i++)
        {
            for(j=0; j<COL; j++)
            {
                printf("The values at %d %d is ", i, j, myarray[i][j]);
            }//end inner for loop
            
        }//end outer for loop
        
        //assume the first element of the array is the lowest and the highest
        highest= myarray[0][0];
        lowest= myarray[0][0];
        
        //checking for the highest and lowest
        for(i=0; i<ROW; i++)
        {
            for(j=0; j<COL; j++)
            {
                //checking the highest first
                if (highest < myarray[i][j])
                {
                    highest = myarray[i][j];
                    
                }//end if
                
                //checking the lowest second
                if (lowest > myarray[i][j])
                {
                    lowest = myarray[i][j];
                    
                }//end if
                
            }//end inner for loop
            
        }//end outer for loop
        
        //find the sum of the array
        
        for(i=0; i<ROW; i++)
        {
            for(j=0; j<COL; j++)
            {
                sum= sum + myarray[i][j];
            }//end inner for loop
            
        }//end outer for loop
        
        average=(float)sum/(ROW*COL);
        
        printf("The average of the array is %d", average);
       
        
        getchar();
        getchar();
        
    }//end main
    
    