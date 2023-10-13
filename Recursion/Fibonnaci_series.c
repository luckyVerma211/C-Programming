#include<stdio.h>
int fibo(int n){
    if(n<=2)
        return 1;
    int res=fibo(n-1)+fibo(n-2);
    return res;
}
int main(){
    int num;
    printf("Enter the number of series to be printed:");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        int res=fibo(i);
        printf("%d\t",res);
    }
    return 0;
}