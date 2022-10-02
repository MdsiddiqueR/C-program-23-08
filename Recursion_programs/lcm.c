/*Write a C program to find LCM of two numbers using recursion.*/

#include <stdio.h>

//function declaration
int lcm(int a, int b);

int main()
{
	int num1, num2, result;
	
	//Input two numbers from user
    printf("Enter first number to find LCM: ");
    scanf("%d", &num1);
	printf("Enter second number to find LCM: ");
    scanf("%d", &num2);
    
	//calling function result
	result= lcm(num1, num2);
	printf("lcm of %d and %d = %d", num1, num2, result);
	return 0;
}


int lcm(int a, int b)
{
	//static variable is initialized only once for each function call
	static int temp = 1;
	
	if(temp % a == 0 && temp % b ==0)
		return temp;
	else
	{
		temp++;
		lcm(a, b);
		return temp;
	}	
}
