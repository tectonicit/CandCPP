#include<stdio.h>
main()
{
    int a,b,c;
    printf("Enter 2 digit number");
    scanf("%d",&a);
    b=a/10;

    if(a>=11 && a<=19)
    {

        switch(a)
        {
        case 1:
            printf("Eleven");
            break;
        case 12:
            printf("Twelve");
            break;
        case 13:
            printf("Thirteen");
            break;


        }
    }
    else
    {
        switch(b)
        {
        case 1:
            printf("Ten");
            break;
        case 2:
            printf("Twenty");
            break;
        case 3:
            printf("Thirty");
            break;

        }
        c=a%10;
        switch(c)
        {
        case 1:
            printf("One");
            break;
        case 2:
            printf("Two");
            break;
        case 3:
            printf("Three");
            break;

        }

    }

}
