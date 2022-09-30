#include<stdio.h>
void main(){
    int ch,a,b,rs;
    printf("Welcome to Calculator!!\n");
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    printf("Press 1 - To Add\n");
    printf("Press 2 - To Subtract\n");
    printf("Press 3 - To Multiply\n");
    printf("Press 4 - To Divide\n");
    printf("Press 5 - To Find Remainder\n");
    printf("Enter your Choice:");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        rs=a+b;
        printf("The sum of %d and %d is: %d",a,b,rs);
        break;
    case 2:
        rs=a-b;
        printf("The difference of %d and %d is: %d",a,b,rs);
        break;
    case 3:
        rs=a*b;
        printf("The product of %d and %d is: %d",a,b,rs);
        break;
    case 4:
        rs=a/b;
        printf("The quotient of %d and %d is: %d",a,b,rs);
        break;
    case 5:
        rs=a%b;
        printf("The remainder of %d and %d is: %d",a,b,rs);
        break;
    default:
        printf("Invalid Choice!!");
        break;
    }


}