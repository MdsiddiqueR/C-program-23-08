/*Write a C program to find GCD (HCF) of two numbers using recursion*/

#include <stdio.h>

//function declaration
int gcd(int a, int b);

int main()
{
	int num1, num2, hcf;
	
	//Input two numbers from user
    printf("Enter first number to find GCD: ");
    scanf("%d", &num1);
	printf("Enter second number to find GCD: ");
    scanf("%d", &num2);
    
	//calling function gcd
	hcf = gcd(num1, num2);
	printf("gcd of %d and %d = %d", num1, num2, hcf);
	return 0;
}

//approach euclidean algorithm to find GCD of two numbers
int gcd(int a, int b)
{
	if(b == 0)
		return a;
	else
		return gcd(b, a % b);
}
