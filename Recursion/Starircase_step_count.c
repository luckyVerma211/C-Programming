//single and double steps are only allowed to reach nth stair

#include<stdio.h>
int stair(int n){
    if(n==1 || n==2)
        return n;
    int totalways=stair(n-1)+stair(n-2);
    return totalways;
}
int main(){
    int n;
    printf("Enter the number of stairs:");
    scanf("%d",&n);
    int ways=stair(n);
    printf("The number of ways is: %d",ways);
    return 0;
}