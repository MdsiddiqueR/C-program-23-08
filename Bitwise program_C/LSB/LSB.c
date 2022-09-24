/*Write a C program to check Least Significant Bit (LSB) of a number is set or not.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;

    printf("Enter the Number :");
    scanf("%d",&number);

    //Perform bitwise AND with LSB and 1.
    if(number & 1)
        printf("LSB of %d is set (1)", number);
    else
        printf("LSB of %d is unset (0)", number);

    return 0;
}
