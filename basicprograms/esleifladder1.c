//3.	Write a C program to check whether a number is
//divisible by 5 and 11 or not.

#include<stdio.h>

main()
{
    char ch;

    int x;
    printf("Enter any char:");
    scanf("%c",&ch);
    x=ch;
    //printf("%d",x);
    if(x>=65 && x<=90)
    {
        printf("Capital");
    }
    else if(x>=97 && x<=122)
    {
        printf("Small letter");
    }
    else if (x>=48 && x<=57)
    {
        printf("Digit");
    }
    else
    {
        printf("I dont know this char");
    }


}
