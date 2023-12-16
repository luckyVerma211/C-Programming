//Write a program to print the multiplication of two matrices given by the user
#include<stdio.h>
int main(){
  int A[100][100],B[100][100],C[100][100];
  int m1,n1,m2,n2;
  printf("Enter the number of rows of Matrix A:");
  scanf("%d",&m1);
  printf("Enter the number of columns of Matrix A:");
  scanf("%d",&n1);
  printf("Enter the number of rows of Matrix B:");
  scanf("%d",&m2);
  printf("Enter the number of columns of Matrix B:");
  scanf("%d",&n2);
  printf("\n");
  if(n1==m2){
    //Input of Matrix A
    printf("Enter the element of Matrix A\n");
    for(int i=0;i<m1;i++){
      for(int j=0;j<n1;j++){
        printf("Enter the element at position(%d,%d):",i,j);
        scanf("%d",&A[i][j]);
      }
    }
    printf("\n");
    //Input of Matrix B
    printf("Enter the element of Matrix B\n");
    for(int i=0;i<m2;i++){
      for(int j=0;j<n2;j++){
        printf("Enter the element at position(%d,%d):",i,j);
        scanf("%d",&B[i][j]);
      }
    }
    printf("\n");
    //Printing of Matrix A
    printf("The Matrix A is:\n");
    for(int i=0;i<m1;i++){
      for(int j=0;j<n1;j++){
        printf("%d\t",A[i][j]);
      }
      printf("\n");
    }
    printf("\n");
    //Printing of Matrix B
    printf("The Matrix B is:\n");
    for(int i=0;i<m2;i++){
      for(int j=0;j<n2;j++){
        printf("%d\t",B[i][j]);
      }
      printf("\n");
    }
    printf("\n");
    //Multiplication of Matrix
    for(int i=0;i<m1;i++){
      for(int j=0;j<n2;j++){
        C[i][j]=0;
        for(int k=0;k<n1;k++)
          C[i][j]+=A[i][k]*B[k][j];
      }
    }
    //Printing of multiplication
    printf("The Matrix Multiplication is:\n");
    for(int i=0;i<m1;i++){
      for(int j=0;j<n2;j++){
        printf("%d\t",C[i][j]); 
      }
      printf("\n");
    }
  }
  else{
    printf("The Matrix Multiplication is not possible!!");
  }
  return 0;
}