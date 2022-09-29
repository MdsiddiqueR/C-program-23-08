﻿/*Write a C program print total number of days in a month using switch case.*/

#include <stdio.h>	

int main()
{
	int month;
	
	//Input month from the user 
	printf("Enter the Month Number (1-12): ");
	scanf("%d", &month);
	
	switch(month)
	{
		//Group all 31 days cases together
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("31 days");
			break;
		
		//Group all 30 days cases together
		case 4:
		case 6:
		case 9:
		case 11:
			printf("30 days");
			break;
		
		//remaining case
		case 2:
			printf("28/29 days");
			break;
		
		default:
			printf("Invalid input! Please enter month number between 1-12");
	}
	return 0;
}