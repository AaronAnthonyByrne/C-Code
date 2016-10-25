/* Getchar and Putchar
    Third Week Lab(3.5)
    Author; Aaron Byrne C15709609
    Date; 06/10/2015*/
#include <stdio.h>
main()
{
    char ch;
	
    
    
    printf("Enter any character\n"); //Enter the character
	ch = getchar();  //like scanf();
	
    
    printf("\n You entered "); //display the character, space is for the character input
	putchar(ch);

    getchar();
    getchar();
    
    }//end main
