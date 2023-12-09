//Given a matrix 'a' of dimension nXm and two coordinates (l1,r1) and (l2,r2). Return the sum of the rectangle from (l1,r1) to (l2,r2)
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

  int l1,r1,l2,r2;
  printf("Enter the cordinate row of starting element:");
  scanf("%d",&l1);
  printf("Enter the cordinate column of starting element:");
  scanf("%d",&r1);
  printf("Enter the cordinate row of ending element:");
  scanf("%d",&l2);
  printf("Enter the cordinate column of starting element:");
  scanf("%d",&r2);

  printf("The rectangular array of selected cordinate is:\n");
  int sum=0;
  for(int i=l1;i<=l2;i++){
    for(int j=r1;j<=r2;j++){
      sum+=arr[i][j];
      printf("%d\t",arr[i][j]);
    }
    printf("\n");
  }
  printf("The sum of the selected cordinate matrix is: %d",sum);
  return 0;
}