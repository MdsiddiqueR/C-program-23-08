/*Write a C program to print all even or odd numbers in given range using recursion.*/

#include <stdio.h>

//function declaration
void oddAndEven(int start, int end);
int main()
{
	int start, end;
    
    //Input lower and upper limit to print odd and even numbers 
    printf("Enter start limit number: ");
    scanf("%d", &start);
    printf("Enter end limit number: ");
    scanf("%d", &end);
    
    printf("\nAll odd numbers between %d to %d are: \n", start, end);
    oddAndEven(1, end); 
    
    printf("\nAll even numbers between %d to %d are: \n", start, end);
    oddAndEven(2, end);
    
	return 0;
}


//Recursive function to print even or odd numbers in a given range.
void oddAndEven(int start, int end)
{
	if(start > end)
		return;
	printf("%d, ",start);
	//Recursively call to printEvenOdd to get next value
	oddAndEven(start + 2, end);
}
