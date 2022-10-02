/*number is prime, Armstrong or perfect number using functions.*/

#include <stdio.h>
#include <math.h>

/* Function declarations */
int isPrime(int num);
int isArmstrong(int num);
int isPerfect(int num);

int main()
{
	int num;
    
    //input from user
    printf("Enter any number: ");
    scanf("%d", &num);
    
    // Call isPrime() functions
    if(isPrime(num))
    {
        printf("%d is Prime number.\n", num);
    }
    else
    {
        printf("%d is not Prime number.\n", num);
    }
    
    // Call isArmstrong() function
    if(isArmstrong(num))
    {
        printf("%d is Armstrong number.\n", num);
    }
    else
    {
        printf("%d is not Armstrong number.\n", num);
    }
    
    // Call isPerfect() function
    if(isPerfect(num))
    {
        printf("%d is Perfect number.\n", num);
    }
    else
    {
        printf("%d is not Perfect number.\n", num);
    }
	return 0;	
}

//Returns 1 if the number is prime otherwise 0.
int isPrime(int num)
{ 
	int i;
	for(i=2; i<=num/2; i++)
	{
		//If the number is divisible by any number  other than 1 and self then it is not prime
		if(num % i == 0)
		{
			return 0;
		}
	}
	return 1;
}

//Returns 1 if the number is perfect otherwise 0.
int isArmstrong(int num)
{
	int n,r, sum = 0, temp;
	n = num;
	temp = n;
	//Check whether the sum is equal to the given number of not
	while(n > 0)
	{
		r = n % 10;
		sum = sum +(r*r*r);	
		n = n / 10;
	}
	
	return (temp == sum);
}

//Returns 1 if the number is perfect otherwise 0.
int isPerfect(int num)
{
	int i, n, sum = 0;
	n = num;
	
	
	for(i=1; i<n ;i++)
	{
		//If i is a divisor of num
		if(n%i == 0)
		{
			sum += i;
		}
	}
	return (num == sum);
}
