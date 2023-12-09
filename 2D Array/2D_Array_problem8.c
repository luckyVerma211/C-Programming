//Write a program to Print the transpose of the matrix entered by the user and store it in a separete matrix.(LeetCode-867)
#include<stdio.h>
int main(){
  int n,m;
  printf("Enter the number rows of matrix:");
  scanf("%d",&n);
  printf("Enter the number colunms of matrix:");
  scanf("%d",&m);
  int arr[n][m];
  int tran[m][n];
  //Input of Matrix
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      printf("Enter the element:");
      scanf("%d",&arr[i][j]);
    }
  }

  //Printing of Matrix
  printf("The matrix formed is:\n");
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      printf("%d\t",arr[i][j]);
    }
    printf("\n");
  }
  
  //Transpose of Matrix
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      tran[i][j]=arr[j][i];
    }
  }

  //Printing transpose of the matrix
  printf("The transpose of the matrix is:\n");
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      printf("%d\t",tran[i][j]);
    }
    printf("\n");
  }
  return 0;
}