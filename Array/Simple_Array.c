#include<stdio.h>
int main(){
    int a[5];
    for(int i=0;i<5;i++){
        printf("Enter the number:");
        scanf("%d",&a[i]);
    }
    printf("The Elements of the array are:");
    for(int i=0;i<5;i++){
        printf("\t %d",a[i]);
    }
}
