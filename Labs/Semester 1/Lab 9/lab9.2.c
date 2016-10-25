#include<stdio.h>

main()
    {
        int num1;
        char char1;
        int *ptr1;
        char *ptr2;
        int *ptr3;
        
        num1 = 2;
        char1 ='f';
        ptr1=&num1;
        ptr2=&char1;
        ptr3=&char1;//Cannot convert 'char *' to 'int *' in function main()
        
        
        printf("Num1 contains %d\n", num1);
        printf("Char1 contains %c \n", char1);
        
        printf("*ptr1 contains %d\n", *ptr1);
        printf("*ptr2 conatains %c\n", *ptr2);
        
        /* can not print the contents on ptr3 because you can not convert 
                    a 'char*' to a 'int*' in function main */
                    
        printf("*ptr3 contains %d\n", *ptr3);
        printf("*ptr3 contains %c\n", *ptr3);
        
        printf(" The address of ptr1 is %p \n", ptr1);
        printf("The address of ptr2 is %p\n", ptr2);

        
        getchar();
        getchar();
        
    }//end main