#include<stdio.h>
void sum(int n,int s){
    if(n==0){
        printf("The sum is :%d",s);
        return;
    }
    sum(n-1,s+n);
    return s;
}
int main(){
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    sum(num,0);
    return 0;
}