/*Write a C program to find sum of all even or odd numbers in given range using recursion.*/

#include <stdio.h>

//function declaration
int sumOfEvenOdd(int start, int end);
int sumOfOdd(int start, int end);

int main()
{
	int start, end;
    
    //Input lower and upper limit to print odd and even numbers 
    printf("Enter start limit number: ");
    scanf("%d", &start);
    printf("Enter end limit number: ");
    scanf("%d", &end);
    // prints sum of odd numbers
    printf("\nSum of odd numbers between %d to %d are: %d\n", start, end, sumOfEvenOdd(1, end));
    
    //prints sum of even numbers
    printf("\nSum of even numbers between %d to %d are: %d \n", start, end, sumOfEvenOdd(2, end));
   
    
	return 0;
}


//Find sum of all even and odd numbers recursively.
int sumOfEvenOdd(int start, int end)
{
	if(start > end)
		return 0;
	else
		return start + sumOfEvenOdd(start + 2, end);
}
