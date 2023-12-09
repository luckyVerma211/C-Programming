//Write a program to add two matrices
#include<stdio.h>
void matrix_input(int r,int c,int arr[r][c]){
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      printf("Enter the element:");
      scanf("%d",&arr[i][j]);
    }
  }
}
void sum_matrix(int r,int c,int arr1[r][c],int arr2[r][c],int arr3[r][c]){
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      arr3[i][j]=arr1[i][j]+arr2[i][j];
    }
  }
}
void print_matrix(int r,int c,int arr[r][c]){
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      printf("%d ",arr[i][j]);
    }
    printf("\n");
  }
}
int main(){
  int A[100][100],B[100][100],C[100][100];
  int r1,c1,r2,c2;
  //Input of matrix A
  printf("Enter the number of rows of matrix A:");
  scanf("%d",&r1);
  printf("Enter the number of columns of matrix A:");
  scanf("%d",&c1);
  printf("Enter the elements of Matrix A:\n");
  matrix_input(r1,c1,A);

  //Input of matrix B
  printf("Enter the number of rows of matrix B:");
  scanf("%d",&r2);
  printf("Enter the number of columns of matrix B:");
  scanf("%d",&c2);
  printf("Enter the elements of Matrix B:\n");
  matrix_input(r2,c2,B);

  //Performing Addition
  if(r1==r2 && c1==c2){
    sum_matrix(r1,c1,A,B,C);
    printf("The matrix A is:\n");
    print_matrix(r1,c1,A);
    printf("\n");
    printf("The matrix B is:\n");
    print_matrix(r1,c1,B);
    printf("\n");
    printf("The matrix C is:\n");
    print_matrix(r1,c1,C);
    printf("\n");
  } 
  else{
    printf("The addition is not possible!!");
    printf("The size of Matrix A and B are not same!");
  }
  return 0;
}