//Q1.WAP to find  area of below formula basic ways(ans=a^2+2ab+b^2)

#include <stdio.h>

int main()
{

    int a,b,ans;

       printf("Enter the value of a: \n");
       scanf("%d",&a);

       printf("Enter the value of a: \n");
       scanf("%d",&b);

       ans =(a*a) + (2*a*b) + (b*b);

    printf("Value of ans is: %d\n", ans);

}
