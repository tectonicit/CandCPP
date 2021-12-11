

//WAP to take 2 digit number and print addtion of its digit

#include<stdio.h>

main()
{

  int a,b,c;
    printf("Enter 2 digit number");
    scanf("%d",&a);
    b=a/10;
    c=a%10;
    a=b+c*10;
    printf("%d",a);

}


