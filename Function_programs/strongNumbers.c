/*Wirte C program to print strong numbers in a given interval using functions
 */
 
#include <stdio.h>

/* Function declaration */
long fact(int num);
void strongNumbers(int start, int end);


int main()
{
    int start, end;
    
    /* Input start and end range */
    printf("Enter the start limit : ");
    scanf("%d", &start);
    printf("Enter the end limit : ");
    scanf("%d", &end);
    
    printf("All strong numbers between %d to %d are: \n", start, end);
    strongNumbers(start, end);
    
    return 0;
}


// Print all strong numbers in a given range
 
void strongNumbers(int start, int end)
{
    long long sum;
    int num;
    
    // Iterates from start to end
    while(start != end)
    {
        sum = 0;
        num = start;
        
        // Calculate sum of factorial of digits
        while(num != 0)
        {
            sum += fact(num % 10);
            num /= 10; 
        }
        
        // If sum of factorial of digits equal to current number
        if(start == sum)
        {
            printf("%d, ", start);
        }
        
        start++;
    }
}


// Recursively find factorial of any number

long fact(int num)
{
    if(num == 0)
        return 1;
    else
        return (num * fact(num-1));
}
