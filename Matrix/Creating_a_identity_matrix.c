#include<stdio.h>
int main(){
    int A[10][10];
    int n;
    printf("Enter the number order of matrix to be created:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j)
                A[i][j]=1;
            else
                A[i][j]=0;
        }
    }
    printf("The matrix created is:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d\t",A[i][j]);
        }
        printf("\n");
    }
    return 0;
}