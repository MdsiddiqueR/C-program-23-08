/*Write a C program to find reverse of any number using recursion.*/

#include <stdio.h>
#include <math.h>

//function declaration
int reverse(int num);

int main()
{
	int num, rev;
	
	//input from user
	printf("Enter any numbers :");
	scanf("%d", &num);
	
	//calling functionto reverse number
	rev = reverse(num);
	printf("reverse of %d is %d ", num, rev);
	return 0;
}

//Recursive function to find reverse of any number
int reverse(int num)
{
	//Find total digits in num
	int digits = (int) log10(num);
	
	//base condition
	if(num == 0)
		return 0;
	
	return ((num % 10 * pow(10, digits)) + reverse(num / 10));
}