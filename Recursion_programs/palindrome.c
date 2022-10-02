/*Write a C program to check whether a number is palindrome or not using recursion.*/

#include <stdio.h>
#include <math.h>

//function declaration
int ispalindrome(int num);
int reverse(int num);

int main()
{
	int num;
	//input from user
	printf("Enter the number to check palindrome :");
	scanf("%d", &num);
	
	if(ispalindrome(num) == 1)
		printf("%d is palindrome number.\n", num);
	else
		printf("%d is not palindrome number.\n", num);
	
	return 0;
}

int ispalindrome(int num)
{
	//Check if the given number is equal to its reverse
	if(num == reverse(num))
	{
		return 1;
	}
	return 0;
}

//Recursive function to find reverse of any number
int reverse(int num)
{
	//find the number of digits in num
	int digits = (int)log10(num);
	
	//recursion base condition
	if(num == 0)
		return 0;
	
	return ((num % 10 * pow(10, digits)) + reverse(num/10));
}