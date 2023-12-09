#include<stdio.h>
int main(){
  int r,c;
  printf("Enter the number of rows:");
  scanf("%d",&r);
  printf("Enter the number of columns:");
  scanf("%d",&c);
  int A[r][c];
  //Input of Matrix
  printf("Enter the elements in the matrix\n");
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      printf("Enter the number:");
      scanf("%d",&A[i][j]);
    }
  }
  //Printing the Matrix
  printf("The matrix formed is:\n");
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      printf("%d ",A[i][j]);
    }
    printf("\n");
  }
  return 0;
}
