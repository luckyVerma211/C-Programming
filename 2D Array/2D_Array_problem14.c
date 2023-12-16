//Given nxm matrix print in wave form.
/*Wave print-2
123
456
789
output:7 4 1 2 5 8 9 6 3*/
#include<stdio.h>
int main(){
  int A[100][100];
  int m1,n1;
  printf("Enter the number of rows of Matrix:");
  scanf("%d",&m1);
  printf("Enter the number of columns of Matrix:");
  scanf("%d",&n1);
  //Input of Matrix
  printf("Enter the element of Matrix:\n");
  for(int i=0;i<m1;i++){
    for(int j=0;j<n1;j++){
      printf("Enter the element at position(%d,%d):",i,j);
      scanf("%d",&A[i][j]);
    }
  }
  printf("\n");
    //Printing of Matrix A
    printf("The intial Matrix is:\n");
    for(int i=0;i<m1;i++){
      for(int j=0;j<n1;j++){
        printf("%d\t",A[i][j]);
      }
      printf("\n");
    }
    printf("\n");
  //wave for printing
  printf("The Wave order of matrix is:\n");
  for(int j=0;j<n1;j++){
    if(j%2==0){
      for(int i=m1-1;i>=0;i--){
        printf("%d\t",A[i][j]);
      }
    }
    else{
      for(int i=0;i<m1;i++){
        printf("%d\t",A[i][j]);
      }
    }
  }
  return 0;
}