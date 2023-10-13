#include<stdio.h>
void decreasing(int n){
    if(n==0)
        return;
    printf("%d\n",n);
    decreasing(n-1);
    return;
}
int main(){
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    decreasing(num);
    return 0;
}