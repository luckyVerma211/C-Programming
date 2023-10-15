//single, double and triple steps are only allowed to reach nth stair

#include<stdio.h>
int stair(int n){
    if(n<=3)
        return n;
    int totalways=stair(n-1)+stair(n-2)+stair(n-3)+1;
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