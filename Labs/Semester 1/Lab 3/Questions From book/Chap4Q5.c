/* Chap4Q5
    Third Week Lab(3.5)
    Author; Aaron Byrne C15709609
    Date; 06/10/2015*/
    
#include <stdio.h>

main()
{
    int heartbeat, age, minutespyear, total;
    
    heartbeat = 75;
    minutespyear= 525600;
    printf("Enter your age to calculate how many heartbeats youve taken in your life\n");
    scanf("%d", &age);
    
    total = heartbeat * minutespyear * age;
    printf("You heart has beaten an approx. of %d", total);
    
getchar();
getchar();
}
    
    