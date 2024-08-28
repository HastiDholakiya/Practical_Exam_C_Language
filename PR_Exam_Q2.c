//Q2.WAP to find lowest value from 3 numbers using nested if else.

#include <stdio.h>

int main()
{
    int n1,n2,n3;
    
    printf("Enter first number: ");
    scanf("%d", &n1);

    printf("Enter second number: ");
    scanf("%d", &n2);

    printf("Enter third number: ");
    scanf("%d", &n3);

    
    if(n1<=n2)
    {
        if (n1<=n3)
        {
            printf("%d is the lowest number. \n", n1);
        }else
        {
            printf("%d is the lowest number. \n", n2);
        }
    }else
    {
        if (n2<=n3)
        {
            printf("%d is the lowest number. \n", n2);
        }else
        {
            printf("%d is the lowest number. \n", n3);
        }
    }
    
}
