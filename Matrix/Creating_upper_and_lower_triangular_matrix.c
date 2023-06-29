#include<stdio.h>
int main(){
    int A[10][10];
    int n;
    printf("Enter the order of matrix:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("Enter the element:");
            scanf("%d",&A[i][j]);
        }
    }
    printf("The matrix created is:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d\t",A[i][j]);
        }
        printf("\n");
    }
    printf("The upper Triangular matrix is:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j || i<j)
                printf("%d\t",A[i][j]);
            else
                printf(" \t");
        }
        printf("\n");
    }
    printf("The lower Triangular matrix is:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i>j)
                printf("%d\t",A[i][j]);
            else
                printf(" \t");
        }
        printf("\n");
    }
    return 0;
}