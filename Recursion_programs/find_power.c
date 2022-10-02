/*Write a C program to find power of any number using recursion.*/

#include <stdio.h>

//function declaration
int power(int base, int exponent);

int main()
{
	int base, exponent;
	
	//Input base and exponent from user
	printf("Enter the base number :");
	scanf("%d", &base);
	printf("Enter the exponent number :");
	scanf("%d", &exponent);
	
	printf("Power(%d^%d) = %d\n",base,exponent,power(base,exponent));
	return 0;
}


//Calculate power of any number Returns base ^ expo
int power(int base, int exponent)
{ 
	//base condition
	if(exponent == 0)	
		return 1;
	else
		return (base*power(base, exponent-1));
}
