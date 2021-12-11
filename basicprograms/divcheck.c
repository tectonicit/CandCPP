//3.	Write a C program to check whether a number is
//divisible by 5 and 11 or not.

#include<stdio.h>

main()
{
    int x;
    printf("Enter number");
    scanf("%d",&x);
    if(x%5==0 && x%11==0)
    {
        printf("Number is div by 5 and 11");
    }
    else
    {
        printf("Number is div not by 5 and 11");
    }


}
