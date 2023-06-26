#include<stdio.h>
int main(){
    int m1,n1,m2,n2;
    int A[100][100],B[100][100];
    printf("Enter the number of rows in Matrix A:");
    scanf("%d",&m1);
    printf("Enter the number of columns in Matrix A:");
    scanf("%d",&n1);
    printf("Enter the elements of matrix A\n");
    for(int i=0;i<m1;i++){
        for(int j=0;j<n1;j++){
            printf("Enter the element:");
            scanf("%d",&A[i][j]);
        }
    }
    printf("Enter the number of rows in Matrix B:");
    scanf("%d",&m2);
    printf("Enter the number of columns in Matrix B:");
    scanf("%d",&n2);
    printf("Enter the elements of matrix B\n");
    for(int i=0;i<m2;i++){
        for(int j=0;j<n2;j++){
            printf("Enter the element:");
            scanf("%d",&B[i][j]);
        }
    }
    if(m1!=m2 && n1!=n2 ){
        printf("The dimensions of matrix are not equal!\n");
        printf("Addition is not possible!!");
    }
    else{
        printf("The Matrix A is:\n");
        for(int i=0;i<m1;i++){
            for(int j=0;j<n1;j++){
                printf("%d\t",A[i][j]);
            }   
            printf("\n");
        }
        printf("The Matrix B is:\n");
        for(int i=0;i<m2;i++){
            for(int j=0;j<n2;j++){
                printf("%d\t",B[i][j]);
            }   
            printf("\n");
        }
        printf("The Sum of Matrix A and B:\n");
        int C[100][100];
        for(int i=0;i<m1;i++){
            for(int j=0;j<n1;j++){
                int c=A[i][j]+B[i][j];
                C[i][j]=c;
                printf("%d\t",C[i][j]);
            }
            printf("\n");
        }
    }
}