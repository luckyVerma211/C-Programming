//Write a program to print the row number having the maximum sum in a given matrix
#include<stdio.h>
int main(){
  int n,m;
  printf("Enter the number rows of matrix:");
  scanf("%d",&n);
  printf("Enter the number colunms of matrix:");
  scanf("%d",&m);
  int arr[n][m];
  
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
  int max=0;
  int max_row=0;
  for(int i=0;i<n;i++){
    int sum=0;
    for(int j=0;j<m;j++){
      sum+=arr[i][j];
    }
    if(max<sum){
      max=sum;
      max_row=i+1;
    }
  }
  printf("The maximum row is: %d\n",max_row);
  printf("The sum of the maximum row of the matrix is: %d",max);
  return 0;
}