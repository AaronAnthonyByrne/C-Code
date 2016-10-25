#include<stdio.h>

main()
    {
        int num1;
        char char1;
        int *ptr1;
        char *ptr2;
        
        num1 = 2;
        char1 ='f';
        ptr1=&num1;
        ptr2=&char1;
        
        printf("Num1 contains %d\n", num1);
        printf("Char1 contains %c \n", char1);
        
        printf("*ptr1 contains %d\n", *ptr1);
        printf("*ptr2 conatains %c\n", *ptr2);
        
        printf(" The address of ptr1 is %p \n", ptr1);
        printf("The address of ptr2 is %p\n", ptr2);

        
        getchar();
        getchar();
        
    }//end main