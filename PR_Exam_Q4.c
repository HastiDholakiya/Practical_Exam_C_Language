//Q4. Write a C program to count the number of digits in a number. Using for loop..

#include <stdio.h>

int main() 
{
    int n, count=0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    for(; n!=0; n/=10)
    {
        count++;
    }

    printf("Number of digits: %d\n", count);

}
