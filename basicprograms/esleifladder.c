//3.	Write a C program to check whether a number is
//divisible by 5 and 11 or not.
#include<stdio.h>
main()
{
    int a,b,c;
    printf("Enter 3 number");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a>b && a>c)
    {
        printf("A is MAX");
    }
    else if(b>a && b>c)
    {
        printf("B is MAX");
    }
    else
    {
        printf("C is MAX");
    }

}
