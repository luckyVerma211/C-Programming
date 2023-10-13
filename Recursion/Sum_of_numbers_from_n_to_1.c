#include<stdio.h>
int sum(int n){
    if(n==1)
        return 1;
    int s=n+sum(n-1);
    return s;
}
int main(){
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    int res=sum(num);
    printf("The sum is: %d",res);
    return 0;
}