
#include<stdio.h>

main()
{
    int x,y;
    printf("Enter number");
    scanf("%d",&x);
    y=x%2;
    if(y==0)
    {
        printf("Even number");
    }
    else
    {
        printf("Odd number");
    }

}
