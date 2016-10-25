/* Program to demonstrate the use of the return statement.   */
#include <stdio.h>

//prototype
int highest(int,int);//return type

    main()
    {
        int high=0;
        int num1, num2;
        
        printf("Enter two different numbers\n");
        scanf("%d", &num1);
        scanf("%d", &num2);
        
        //call function highest()
        
        high=highest(num1, num2);
        printf("\n the highest of %d and %d is %d", num1, num2,high);
    }//end main
        //implement highest
        
        int highest(int val1, int val2)
        {
            if(val1>val2)
            {
                return(val1);
            }
            else
            {
                return (val2);
            }
        }//end function
  