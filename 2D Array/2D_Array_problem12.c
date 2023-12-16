//Given an n x m matrix 'a', print all elements of te matrix in spiral order(Leetcode-54)
#include<stdio.h>
int main(){
  int n,m;
  int A[100][100];
  printf("Enter the number of rows of Matrix:");
  scanf("%d",&m);
  printf("Enter the number of columns of Matrix:");
  scanf("%d",&n);
  //Input of Matrix
  printf("Enter the element of Matrix:\n");
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      printf("Enter the element at position(%d,%d):",i,j);
      scanf("%d",&A[i][j]);
    }
  }
  printf("\n");
  //Printing of Matrix A
  printf("The intial Matrix is:\n");
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      printf("%d\t",A[i][j]);
    }
    printf("\n");
  }
  printf("\n");
  //Spiral Order
  int minr=0;
  int maxr=m-1;
  int minc=0;
  int maxc=n-1;
  int tne=m*n; //Total number of elements
  int count=0;
  printf("The Spiral order of matrix is:\n");
  while(count<tne){
    //print the minimum row
    for(int j=minc;j<=maxc;j++){
      printf("%d ",A[minr][j]);
      count++;
    }
    minr++;
    if(count>=tne) break;
    //Print the maximum column
    for(int i=minr;i<=maxr;i++){
      printf("%d ",A[i][maxc]);
      count++;
    }
    maxc--;
    if(count>=tne) break;
    //Print the maximum row(reverse order)
    for(int  j=maxc;j>=minc;j--){
      printf("%d ",A[maxr][j]);
      count++;
    }
    maxr--;
    if(count>=tne) break;
    //Print the minimum column(reverse order)
    for(int i=maxr;i>=minr;i--){
      printf("%d ",A[i][minc]);
      count++;
    }
    minc++;
  }
  return 0;
}