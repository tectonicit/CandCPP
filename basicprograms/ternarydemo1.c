#include<stdio.h>
5.	Write a C program to print sum of digits
enter by user
main()
{

        int a,b,sum=0;
        printf("Enter number:");
        scanf("%d",&a);
        while(a>0)
        {
            b=a%10;
            sum=sum+b;
            a=a/10;
        }
        printf("\n%d",sum);

}

