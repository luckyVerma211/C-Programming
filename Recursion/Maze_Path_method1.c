#include<stdio.h>
int maze(int cr, int cc, int er , int ec){
    int rightWays=0,downWays=0;
    if(cr==er && cc==ec)
        return 1;
    if(cr==er)
        rightWays+=maze(cr,cc+1,er,ec);
    if(cc==ec)
        downWays+=maze(cr+1,cc,er,ec);
    if(cr<er && cc<ec){
        rightWays+=maze(cr,cc+1,er,ec);
        downWays+=maze(cr+1,cc,er,ec);
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
    int ways=maze(1,1,n,m);
    printf("The number of ways is: %d",ways);
    return 0;
}