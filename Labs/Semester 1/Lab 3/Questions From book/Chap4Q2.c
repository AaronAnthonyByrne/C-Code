/* Chap4Q2
    Third Week Lab(3.5)
    Author; Aaron Byrne C15709609
    Date; 06/10/2015*/
#include <stdio.h>
main()
{
    int first;
    int second, third, fourth;
    float principal, rate, time;
    char keyval1, keyval2;
    char c;
    int i;
    float f;
    double d;
    
    printf("\nEnter your first int\n");
    scanf("%d", &first);
    
    printf("\nEnter your second, third, fourth int\n");
    scanf("\n%d %d %d", &second, &third, &fourth);
    
    printf("\nEnter float values for principal, rate, time\n");
    scanf("\n %f %f %f", &principal, &rate, &time);
   
    printf("\nEnter char values for keyval1 and keyval2\n");
    scanf("\n %c %c",&keyval1, &keyval2);
   
    printf("\nEnter the coresponding values to each letter c, i ,f, d\n");
    scanf("\n %c %d %f %lf", &c, &i, &f, &d);
    
    getchar();
    
}//end main