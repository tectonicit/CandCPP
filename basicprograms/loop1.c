#include<stdio.h>
#include<conio.h>
main()
{
    int a,b,c;
    char choice;
    do
    {
        printf("\nEnter 2 numbers:");
        scanf("%d%d",&a,&b);
        c=a+b;
        printf("\nAddition is %d",c);

        printf("\nDo you want to continue?(y/n):");
        choice=getch();
        choice=getche();
    }
    while(choice=='y');

}

