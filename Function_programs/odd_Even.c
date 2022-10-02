/*Write a C program to check whether a number is even or odd using functions.*/

#include <stdio.h>

//function declaration
int findNumber(int number);
int main()
{
	int number;                                    
	//input two numbers from user
	printf("Enter any number: ");
	scanf("%d", &number);
	
	//function calling
	findNumber(number);
        
	return 0;
}

//find the Odd or Even number function
int findNumber(int number)
{
	if(number % 2 == 0)
		printf("%d is Even", number);
    else
    	printf("%d is Odd", number);
}
