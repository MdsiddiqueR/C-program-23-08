/*Write a C program to find cube of any number using function.*/

#include <stdio.h>

// function declaration
double cube(double num);
int main()
{
	int num;
	double c;
	
	//input from user
	printf("Enter any number to find the cube: ");
	scanf("%d", &num);
	
	c = cube(num);
	
	printf("Cube of %d is %.2f", num, c);
	return 0;
}

//function to find cube
double cube(double num)
{
	return (num * num * num);	
}