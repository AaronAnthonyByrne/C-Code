/*Program to input a single character
    Third Week Lab(3.2)
    Author; Aaron Byrne C15709609
    Date; 06/10/2015*/
#include <stdio.h>
main()
{
	char ch1;
    char ch2;
    
	printf("Enter a first character\n");
	scanf("%1s",&ch1);
   
    
    printf("Enter a second character\n"); 
	scanf("1s",&ch2);

    
	printf("\n You entered %c",ch1); 
    printf("\n You entered %c",ch2); 
    getchar();
    
}//end main
