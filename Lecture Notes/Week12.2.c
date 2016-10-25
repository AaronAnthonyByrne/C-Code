/* Pass by value only passes a copy.*/

#include<stdio.h>

//prototype

void fxn(int);

main()
{
    int main_arg=1;
    
    printf("main_arg is %d", main_arg);
    
    //call function fxn() pass a copy of the parameter
    
    fxn(main_arg);
    printf("\nmain arg is %d",main_arg);
}//end main
//implement function fxn()
void fxn(int fxn_arg)
{
    printf("\nfxn_arg is %d", fxn_arg);
    fxn_arg++;
}//end function fxn()