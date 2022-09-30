#include<stdio.h>
int main(){
    int bill,am,dis;
    printf("Enter the Bill Amount:");
    scanf("%d",&bill);
    dis=(bill>1000)?10*bill/100:0;
    am=bill-dis;
    printf("\nDiscount Given is %d",dis);
    printf("\nFinal Amount to be paid is: %d",am);
    return 0;
}