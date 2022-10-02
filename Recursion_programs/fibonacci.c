/*Write a C program to generate nth Fibonacci term using recursion.*/

#include <stdio.h>

//function declaration
long fibo(int num);

int main()
{
	int num;
	long fibonacci;
	
	//input  from user
	printf("Enter the number to find fibonacci :");
	scanf("%d",&num);
	
	fibonacci = fibo(num);
	printf("fibonacci of %d is %lu", num, fibonacci);
	
	return 0;
}

//Recursive function to find nth Fibonacci term
long fibo(int num)
{
	if(num == 0)  // base condition
		return 0;
	else if(num == 1)  //base condition
		return 1;
	else
		return fibo(num - 1) + fibo(num -2);
} 
