#include<stdio.h>
int factorial(int num){
    if(num==1 || num==0)
        return 1;
    int ans=num*factorial(num-1);
    return ans;
}
int main(){
    int num;
    printf("Enter the number :");
    scanf("%d",&num);
    int res=factorial(num);
    printf("The factorial of %d is: %d",num,res);
    return 0;
}
