#include<stdio.h>
int powerlog(int a,int b){
    if(b==0)
        return 1;
    int val=powerlog(a,b/2);
    if(b%2==0)
        return val*val;
    else
        return val*val*a;
}
int main(){
    int a,b;
    printf("Enter the number:");
    scanf("%d",&a);
    printf("Enter the power:");
    scanf("%d",&b);
    int res=powerlog(a,b);
    printf("The result is: %d",res);
    return 0;
}