/*Write a C program to create Simple Calculator using switch case.*/

#include <stdio.h>

int main()
{	
	char operator;
	float num1, num2, result = 0.0f;
	
	printf("SIMPLE CALCULATOR\n");
	printf("------------------\n");
	//input number and operation from user
	printf("Enter[number 1] [+ - * / %] [number 2]\n");
	scanf("%f %c %f", &num1, &operator, &num2);
	
	//Switch the value and perform action based on operator
	switch(operator)
	{
		case '+':	
			result = num1 + num2;
			break;
		case '-': 
            result = num1 - num2;
            break;
		case '*': 
            result = num1 * num2;
            break;
		case '/': 
            result = num1 / num2;
            break;
		default:
			printf("Invalid operator!");
	}
	//print the result
	printf("%.2f %c %.2f = %.2f", num1, operator, num2, result);
	return 0;
}