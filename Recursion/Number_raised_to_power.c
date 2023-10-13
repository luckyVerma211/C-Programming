#include<stdio.h>
int power(int a,int b){
    if(b==1)
        return a;
    int res=a*power(a,b-1);
    return res;
}
int main(){
    int a,b;
    printf("Enter the number:");
    scanf("%d",&a);
    printf("Enter the power:");
    scanf("%d",&b);
    int res=power(a,b);
    printf("The result is: %d",res);
    return 0;
}