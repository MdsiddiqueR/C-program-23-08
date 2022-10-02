/*Write a C program to find sum of digits of a given number using recursion.*/

#include <stdio.h>

//function declaration
int sumOfDigits(int num);

int main()
{
	int num, sum;
	
	//input from user
	printf("Enter any number to find sum of digits: ");
    scanf("%d", &num);
    
    //calling function
    sum = sumOfDigits(num);
    printf("Sum of digit of %d = %d.", num, sum );
         
	return 0;
}

//Recursive function to find sum of digits of a number
int sumOfDigits(int num)
{
	// base condition
	if(num == 0)
		return 0;
	
	return(num % 10 + sumOfDigits(num / 10));
}