#include<stdio.h>
main()
{

    int ch;
    float a,b,c;
    printf("1.Add\n2.Sub\n3.Mul\n4.Div\n");
    printf("Enter your choice:");
    scanf("%d",&ch);
    printf("\nEnter 2 numbers:");
    scanf("%f%f",&a,&b);
    switch(ch)
    {
    case 1:
        c=a+b;
        printf("Addition is : %f",c);
        break;
    case 2:
        c=a-b;
        printf("Subtraction is : %f",c);
        break;
    case 3:
        c=a*b;
        printf("Multiplication is : %f",c);
        break;
    case 4:
        c=a/b;
        printf("division is : %f",c);
        break;
    default:
        printf("Wrong choice");
    }
}
