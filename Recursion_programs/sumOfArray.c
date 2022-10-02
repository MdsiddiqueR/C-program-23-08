/*Write a C program to find sum of elements of array using recursion.*/

#include <stdio.h>
#define MAX_SIZE 100

//function declaration
int sum(int arr[], int start, int len);

int main()
{
	int arr[MAX_SIZE];
	int n, i, sumofarray;
	
	//Input size and elements in array  
	printf("Enter the size of array :");
	scanf("%d", &n);
	printf("Enter the elements in an array: ");
	for(i=0 ;i<n ;i++)
	{
		scanf("%d", &arr[i]);
	}
	
	sumofarray = sum(arr, 0, n);
	printf("Sum of array elements :%d" ,sumofarray);
	
	return 0;
}

//Recursively find the sum of elements in an array
int sum(int arr[], int start, int len)
{
	//Recursion base condition
	if(start >= len)
		return 0;
	
	return(arr[start] + sum(arr, start + 1, len));
}
