/*Write a C program to flip bits of a binary number using bitwise operator.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, flipNum;

    /* Input number from user */
    printf("Enter any Number : ");
    scanf("%d", &num);

    flipNum = ~(num);

    printf("Entered Number = %d\n", num);
    printf("Number after bits are flipped = %d", flipNum);
    return 0;
}
