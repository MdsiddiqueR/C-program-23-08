/*Write a C program to find factorial of any number using recursion.*/

#include <stdio.h>

//function declaration
long fact(int num);

int main()
{
	int num;
	long factorial;
	
	//input  from user
	printf("Enter the number to find factorial :");
	scanf("%d",&num);
	
	factorial = fact(num);
	printf("factorial of %d is %lu", num, factorial);
	return 0;
}

//Function to compute and return factorial of any number recursively. 
long fact(int num)
{
	// base condition
	if(num == 0)
		return 1;
	else
	return num * fact(num - 1);
}
