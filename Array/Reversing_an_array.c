#include<stdio.h>
int main(){
    int a[100],n;
    printf("Enter the number of elements in the array:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter the number:");
        scanf("%d",&a[i]);
    }
    printf("The original array is:");
    for(int i=0;i<n;i++){
        printf("\t %d",a[i]);
    }
    printf("\n");
    printf("The reverse array is:");
    for(int i=n-1;i>-1;i--){
        printf("\t %d",a[i]);
    }
}