//Write a program to store 10 at every index of a 2D matrix with 5rows and 5columns
#include<stdio.h>
int main(){
  int A[5][5];
  for(int i=0;i<5;i++){
    for(int j=0;j<5;j++)
      A[i][j]=10;
  }

  //Printing the matrix
  printf("The matrix formed is:\n");
  for(int i=0;i<5;i++){
    for(int j=0;j<5;j++)
      printf("%d ",A[i][j]);
    printf("\n");
  }
  return 0;
}