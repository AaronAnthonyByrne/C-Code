/* solution to labs
    display 1-10 in reverse order(seperate line)
    21/10/2015
    */
    
    #include <stdio.h>
    
    main()
    {
        int num= 0;
        int steps= 0;
       
        while (num < 1)
        {
            printf("Enter a number \n");
            scanf("%d", &num);
        }
        
        do
        {
            //check if even
            if (num % 2 == 0)
            {
                num = num /2;
                printf("\n Value of num is %d",num);
            }//end if
            
            else
            {
                num=(num*3)+1;
                printf("\n Value of num is %d",num);
            }
        
            
            steps++;
        }//end while
        while(num !=1);
            
        printf("\nThe final value i is %d. \nThe number of steps taken is %d",num, steps);
        
        getchar();
        getchar();
        
    }//end main
        