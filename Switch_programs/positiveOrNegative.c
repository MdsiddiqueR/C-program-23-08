/*Write a C program to check whether a number is positive, negative or zero using switch case.*/

#include <stdio.h>

int main()
{
	int number;
	
	//input from the user
	printf("Enter any Number: ");
	scanf("%d",&number);
	
	switch(number > 0)
	{
		//number is positive
		case 1:
			printf("%d is positive number", number);
			break;
		
		//number is either negative or zero
		case 0:
			switch(number < 0)
			{
				case 1:
					printf("%d is negative number", number);
					break;
				
				case 0:
					printf("%d number is zero", number);
					break;
			}
			
	}
	return 0;
}