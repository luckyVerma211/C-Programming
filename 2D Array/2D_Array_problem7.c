//Given a matrix having 0-1 only, find the row with the maximum number of 1's
#include<stdio.h>
int main(){
  int n,m;
  printf("Enter the number rows of matrix:");
  scanf("%d",&n);
  printf("Enter the number colunms of matrix:");
  scanf("%d",&m);
  int arr[n][m];

  printf("Enter value of matrix with 0 and 1 only!!!\n");
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

  int max_row=0;
  int sum_i_final=0;
  for(int i=0;i<n;i++){
    int sum_i_initial=0;
    for(int j=0;j<m;j++){
      if(arr[i][j]==1)
        sum_i_initial++;
    }
    if(sum_i_final<sum_i_initial){
      sum_i_final=sum_i_initial;
      max_row=i+1;
    }
  }
  printf("The row with maixmum number of 1's is: %d with %d 1's!!",max_row,sum_i_final);
  return 0;
}