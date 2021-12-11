#include<stdio.h>

main()
{

        int a,b,max;
        printf("Enter 2 numbers:");
        scanf("%d%d",&a,&b);
        max=a>b?a:b;
        /* if(a>b)
        {
            max=a;
        }
        else
        {
            max=b;
        }*/

    printf("Max number is %d",max);
}
