/*Write a C program to count trailing zeros in a binary number.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, tzero=0;

    /* Input number from user */
    printf("Enter any number: ");
    scanf("%d", &num);

    /* looping over each bit of integer */
    while(!(num & 1))
    {
        tzero++;
        num >>= 1;
    }

    printf("Total number of trailing zeros = %d.", tzero);

    return 0;
}
