/* Vowel Switch Statement
    Fourth Week Lab(4.1)
    Author; Aaron Byrne C15709609
    Date; 13/10/2015 */
    
#include <stdio.h>

main()
{
    char vowel;
    
    printf("Please Enter a character from the keyboard\n");
    scanf("%1s", &vowel);
    
    switch(vowel)
    {
        case 'a':
            printf("You entered the vowel a");
            break;
        case 'e':
            printf("You entered the vowel e");
            break;
        case 'i':
            printf("You entered the vowel i");
            break;
        case 'o':
            printf("You entered the vowel o");
            break;
        case 'u':
            printf("You entered the vowel u");
            break;
        case 'A':
            printf("You entered the vowel A");
            break;
        case 'E':
            printf("You entered the vowel E");
            break;
        case 'I':
            printf("You entered the vowel I");
            break;
        case 'O':
            printf("You entered the vowel O");
            break;
        case 'U':
            printf("You entered the vowel U");
            break;
        default:
            printf("You entered a consant");
    }
    
    getchar();
    getchar();
}