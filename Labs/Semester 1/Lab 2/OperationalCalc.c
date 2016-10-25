/* Second week lab.(2.6)
   Operational Calculations
    Author; Aaron Byrne C15709609
    Date; 29/09/2015
    */

#include <stdio.h>;
main()
{
    int Var1, Var2, Var3, Answer;
    
    Var1=15;
    Var2=10;
    Var3=3;
    
    Answer=Var1+Var2;
    printf("%d + %d = %d",Var1, Var2,Answer);
    
    Answer=Var1-Var2;
    printf("\n%d - %d = %d",Var1, Var2,Answer);
    
    Answer=Var1*Var2;
    printf("\n%d * %d = %d",Var1, Var2,Answer);
    
    Answer=(float)Var1/Var2;
    printf("\n%f / %f = %f",Var1, Var2,Answer);
    
    Answer=Var1%Var3;
    printf("\n%d mod %d = %d",Var1, Var3,Answer);
    
}