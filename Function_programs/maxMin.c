/*Write a C program to find maximum and minimum between two numbers using functions.*/

#include <stdio.h>

//function declaration
int maxMin(int num1, int num2);
int main()
{
	int num1, num2;                                    
	
	//input two numbers from user
	printf("Enter the first number: ");
	scanf("%d", &num1);
	printf("\nEnter the second number: ");
	scanf("%d", &num2);
	
	//function calling
	maxMin(num1, num2);
	
	return 0;
}

//find the maximum number function
int maxMin(int num1, int num2)
{
	if(num1 > num2)
		printf("%d is maximum, %d is minimum", num1, num2);
	else if(num1 < num2)
		printf("%d is maximum, %d is minimum", num2, num1);
	else
		printf("Both are same");
		
}
