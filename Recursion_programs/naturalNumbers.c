/*Write a C program to print all natural numbers between 1 to n using recursion.*/

#include <stdio.h>

//function declaration
void numbers(int i, int n);
int main()
{
	int n;
	
	//input from user
	printf("Enter the nth limit of natural number :");
	scanf("%d", &n);
	
	//function calling
	numbers(1, n);
	return 0;
}

//Recursively prints all natural number between the given range.
void numbers(int i, int n)
{
	if(i <= n)
	{
		printf("%d, ",i);
		//Recursively call the function to print next number
		numbers(i+1, n);
	}
}