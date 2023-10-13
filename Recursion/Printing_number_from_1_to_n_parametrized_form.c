#include<stdio.h>
void increasing(int x,int n){
    if(x>n)
        return;
    printf("%d\n",x);
    increasing(x+1,n);
    return;
}
int main(){
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    increasing(1,num);
    return 0;
}