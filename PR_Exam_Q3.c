//Q3.Write a C program to find all natural numbers in reverse using while loop (from n to 1).

#include <stdio.h>

int main() 
{
    int n;

    printf("Enter a natural number: ");
    scanf("%d", &n);

    printf("Natural numbers in reverse: \n", n);
    while(n >= 1)
    {
        printf("%d ",n);
        n--;
    }

}
