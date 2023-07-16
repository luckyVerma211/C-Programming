#include<stdio.h>
int fact(int x){
    int fact=1;
    for(int i=1;i<=x;i++)
        fact*=i;
    return fact;
}
int combination(int n,int r){
    int com;
    com=fact(n)/(fact(r)*fact(n-r));
    return com;
}
int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        for(int k=1;k<=n-i;k++)
            printf(" ");
        for(int j=0;j<=i;j++){
            int res=combination(i,j);
            printf("%d ",res);
        }
        printf("\n");
    }
    return 0;
}