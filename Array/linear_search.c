#include<stdio.h>
int main(){
    int A[100];
    int num,n,found=0;
    printf("Enter the number of elements in the array:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter the number:");
        scanf("%d",&A[i]);
    }
    printf("Enter the number to be searched:");
    scanf("%d",&num);
    for(int j=0;j<n;j++){
        if(A[j]==num){
            printf("%d Found at postion %d",num,j);
            found++;
        }
    }
    if(found==0){
        printf("%d not found in array",num);
        }
}