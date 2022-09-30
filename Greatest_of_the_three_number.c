#include<stdio.h>
int main(){
    int a,b,c,g;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    printf("Enter the third number:");
    scanf("%d",&c);
    g=(a>b)?((a>c)?a:c):((b>c)?b:c);
    printf("The greatest of %d , %d ,and %d is: %d",a,b,c,g);    
    return 0;
}