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
int permutation(int n,int r){
    int per;
    per=fact(n)/fact(n-r);
    return per;
}
int main(){
    int n,r;
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("Enter the value of r:");
    scanf("%d",&r);
    int c=combination(n,r);
    int p=permutation(n,r);
    printf("The permutation is: %d\n",p);
    printf("The combination is: %d",c);
    return 0;
}
