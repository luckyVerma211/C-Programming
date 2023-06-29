#include<stdio.h>
int main(){
    int A[10][10];
    int n,sum=0;
    printf("Enter the number order of matrix to be created:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("Enter the element:");
            scanf("%d",&A[i][j]);
        }
    }
    printf("The created matrix:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d\t",A[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j)
                sum+=A[i][j];
        }
    }
    printf("The sum of the main diagonal elements is: %d",sum);
    return 0;
}