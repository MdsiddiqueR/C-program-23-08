﻿/*Write a C program to print all Armstrong numbers between given interval using functions.*/

#include <stdio.h>

// Function declarations 
int isArmstrong(int num);
void printArmstrong(int start, int end);

int main()
{
    int start, end;
    
    // Input lower and upper limit to of armstrong numbers 
    printf("Enter start limit to print armstrong numbers: ");
    scanf("%d", &start);
    printf("Enter end limit to print armstrong numbers: ");
    scanf("%d", &end);
    
    printf("All armstrong numbers between %d to %d are: \n", start, end);
    printArmstrong(start, end);
    
    return 0;
}

//Print all armstrong numbers between start and end. 
void printArmstrong(int start, int end)
{
     
     // Iterates from start to end and print the current number if it is armstrong
     
    while(start <= end)
    {
        if(isArmstrong(start)) 
        {
            printf("%d, ", start);
        }
        
        start++;
    }
}

//Check whether the given number is armstrong number or not.
//Returns 1 if the number is armstrong otherwise 0.
 
int isArmstrong(int num)
{
	int n,r, sum = 0, temp;
	n = num;
	temp = n;
	//Check whether the sum is equal to the given number of not
	while(n > 0)
	{
		r = n % 10;
		sum = sum +(r*r*r);	
		n = n / 10;
	}
	
	return (temp == sum);
}
