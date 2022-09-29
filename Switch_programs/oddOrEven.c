/*Write a C program to check whether a number is even or odd using switch case.*/

#include <stdio.h>

int main()
{
	int number;
	
	//Input a number from user
	printf("Enter the Number to find ODD or EVEN: ");
	scanf("%d", &number);
	
	switch(number % 2)
	{
		// If n%2 == 1
		case 1:
			printf("%d is Odd", number);
			break;
		
		// If n%2 == 0
		case 0:
			printf("%d is Even", number);
		break;
	}
	return 0;
}
