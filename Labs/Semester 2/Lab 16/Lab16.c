/* Lab 16.
Chap.10.Q9.
The program asks the user for their name and compares it to a array of names already stored.
Displays approriate message.

Date: 8/3/16
Name: Aaron Byrne C15709609
*/

#include <stdio.h>
#include<string.h>
#define SIZE 10

main()
{
    char *names[SIZE]={"Paul", "John", "Mark", "Peter", "Patrick",
                        "Bobby", "Rob", "Conor", "Oliver","Finn"};
    
    char Username[SIZE];
    int i;
    bool flag;
    
    
    printf("Please Enter your name\n");
    gets(Username);
    
    
    for(i=0;i<SIZE;i++)
    {
        if(strcmp(Username,names[i])== 0)
            {
                flag = true;
                break;
                }
                
                else
                    {
                        flag=false;
                        }
    }
    
    if(flag==true)
    {
        printf("Hello %s", Username);
    }
    
    else
    {
        printf("Sorry Username not found");
    }
    getchar();
    getchar();
}