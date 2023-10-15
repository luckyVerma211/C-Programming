#include<stdio.h>
int maze(int m, int n){
    int rightWays=0,downWays=0;
    if(n==1 && m==1)
        return 1;
    if(n==1)  //cannot go down
        rightWays+=maze(n,m-1);
    if(m==1) //cannot go right
        downWays+=maze(n-1,m);
    if(n>1 && m>1){
        rightWays+=maze(n,m-1);
        downWays+=maze(n-1,m);
    }
    int totalWays=rightWays+downWays;
    return totalWays;
}
int main(){
    int n,m;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    printf("Enter the number of columns:");
    scanf("%d",&m);
    int ways=maze(n,m);
    printf("The number of ways is: %d",ways);
    return 0;
}