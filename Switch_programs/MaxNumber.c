/*Write a C program to find maximum between two numbers using switch case.*/

#include <stdio.h>

int main()
{
	int num1, num2;                                    
	
	//input two numbers from user
	printf("Enter the first number: ");
	scanf("%d", &num1);
	printf("\nEnter the second number: ");
	scanf("%d", &num2);
	
   //Expression (num1 > num2) will return either 0 or 1
	switch(num1 > num2)
	{
		//if condition(num1 > num2) is false
		case 1:
			printf("\n%d is maximum number" ,num1);
			break;
		
		//if condition(num1 > num2) is true
		case 0:
			printf("\n%d is maximum number" ,num2);
			break;
		
		default:
			printf("\nBoth number are same");
	}
	return 0;
}