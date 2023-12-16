//Write a program to change the given nXn matrix to its transpose
#include<stdio.h>
int main(){
  int n,m;
  printf("Enter the number rows/columns of matrix:");
  scanf("%d",&n);
  
  int arr[n][n];
  //Input of Matrix
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      printf("Enter the element:");
      scanf("%d",&arr[i][j]);
    }
  }

  //Printing of Matrix
  printf("The initial matrix formed is:\n");
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      printf("%d\t",arr[i][j]);
    }
    printf("\n");
  }
  
  //Transpose of Matrix
  for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
      //swap arr[i][j] and arr[j][i]
      int temp=arr[i][j];
      arr[i][j]=arr[j][i];
      arr[j][i]=temp;
    }
  }

  //Printing transpose of the matrix
  printf("The transpose of the matrix is:\n");
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      printf("%d\t",arr[i][j]);
    }
    printf("\n");
  }
  return 0;
}