/*Write a C program to find all prime numbers between given interval using functions.*/

#include <stdio.h>

//function declaration
int isPrime(int num);
void printPrimes(int minLimit, int maxLimit);

int main()
{
	int minLimit, maxLimit;
	//input minimum and maximum limits from user
	printf("Enter the Minimum limit: ");
	scanf("%d", &minLimit);
	printf("\nEnter the Maximum limit: ");
	scanf("%d", &maxLimit);
	
	//Call function to print all primes between the given range.
	printPrimes(minLimit, maxLimit);
	return 0;
}

void printPrimes(int minLimit, int maxLimit)
{
	printf("All prime number between %d to %d are: ",minLimit, maxLimit);
	
	while(minLimit <= maxLimit)
	{
		//Print if current number is prime
		if(isPrime(minLimit))
		{
			printf("%d, ", minLimit);
		}
			minLimit++;
	}
}

//Check whether a number is prime or not. 
int isPrime(int num)
{
	int i;
	for(i=2; i<=num/2; i++)
	{
		if(num % i == 0)
		{
			return 0;
		}
	}
	return 1;
}                                        