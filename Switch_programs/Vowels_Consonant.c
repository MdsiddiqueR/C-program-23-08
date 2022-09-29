/*Write a C program to check whether an alphabet is vowel or consonant using switch case.*/

#include <stdio.h>

int main()
{
    char ch;

    /* Input alphabet from user */
    printf("Enter any character: ");
    scanf("%c", &ch);

    /* Switch ch value */
    switch(ch)
    {
        case 'a': 
        case 'e': 
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U': 
            printf("%c is a Vowel",ch);
            break;

        default: printf("%c is a Consonant", ch);
    }

    return 0;
}
