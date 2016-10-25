/* Lab Test 2
    Using POINTER NOTATION only
    Enter values into the gallons and miles array.
    Calculate and fill mpg array with the formula; 
    mpg=miles/gallons
    Then display the contents of the mpg ARRAY
    
    Author: Aaron Byrne C15709609   
    Date 08/12/2015
*/
    #include<stdio.h>
    #define AMOUNT 5
    
    main()
    
    {
        float gallons[AMOUNT];
        float miles[AMOUNT];
        float mpg[AMOUNT];
        int i;
        float *ptr1;
        float *ptr2;
        float *ptr3;
        
        ptr1= &gallons[0];
        ptr2= &miles[0];
        ptr3= &mpg[0];
        
        //enter data into the array gallons
        //
        printf("Please Enter values for Gallons\n");
        
        for(i=0; i<AMOUNT; i++)
        {
            scanf("%f", &*(gallons+i));
        }
        
        
        //enter data into the array miles
        //
        printf("Please Enter values for miles\n");
        
        for(i=0;i<AMOUNT; i++)
        {
            scanf("%f", &*(miles+i));
        }
        

        //Calculate the Mile Per Gallon using pointer notation.
        //USING THE FORMULA mpg=mile/gallons
        //
        
        for(i=0;i<AMOUNT;i++)
        {
           *(ptr3+i)=*(ptr2+i)/ *(ptr1+i);
            
        }
        
        //Display the contents of MPG
        //
        
        for(i=0;i<AMOUNT;i++)
        {
            printf("%f\n",*(mpg+i));
        }
        
        getchar();
        getchar();
        
        
    }//END MAIN
        
        
        
        
        