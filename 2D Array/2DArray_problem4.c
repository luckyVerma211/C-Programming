//Find the maximum element, minimum element and sum of a given matrix of nXm and also find index of maximum and minimum element
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

  //Sum,Maximum and Minimum of matrix
  int sum=0;
  int max=arr[0][0],min=arr[0][0];
  int max_idx_i=0;
  int max_idx_j=0;
  int min_idx_i=0;
  int min_idx_j=0;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      if(arr[i][j]>max){
        max=arr[i][j];
        max_idx_i=i;
        max_idx_j=j;
      }
      if(arr[i][j]<min){
        min=arr[i][j];
        min_idx_i=i;
        min_idx_j=j;
      }
      sum+=arr[i][j];
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
  printf("The maximum element of matrix is: %d at index(%d,%d)\n",max,max_idx_i,max_idx_j);
  printf("The minimum elements of matrix is: %d at index(%d,%d)\n",min,min_idx_i,min_idx_j);
  printf("The sum of elements of matrix is: %d\n",sum);
  return 0;
}