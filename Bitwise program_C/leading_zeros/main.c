/*Write a C program to count leading zeros in a binary number.*/
#include <stdio.h>
#include <limits.h>     // Used for INT_MAX

int main()
{
    int num, lzero;

    /* Input number from user */
    printf("Enter any number: ");
    scanf("%d", &num);

    lzero =0;

    while(!(num&(~INT_MAX)))
    {
        lzero++;
        num<<= 1;
    }
    printf("Total number of leading zeros : %d", lzero);

    return 0;
}
