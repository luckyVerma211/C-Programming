//Write a program to rotate a matrix 90degree clockwise(LeetCode-48)
#include<stdio.h>
int main(){
  int n;
  int arr[100][100];
  printf("Enter the number of rows:");
  scanf("%d",&n);
  //Input of Matrix
  printf("Enter elements into Matrix!\n");
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      printf("Enter the element:");
      scanf("%d",&arr[i][j]);
    }
  }
  //Printing of Matrix
  printf("The inital matrix is:\n");
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++)
      printf("%d\t",arr[i][j]);
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
  //Reverse of each row for rotation
  for(int i=0;i<n;i++){
    int j=0;
    int k=n-1;
    while(j<k){
      //swap arr[i][j] and arr[i][k]
      int temp=arr[i][j];
      arr[i][j]=arr[i][k];
      arr[i][k]=temp;
      j++;
      k--;
    } 
  }
  printf("\n");
  //Printing 90degree rotated of the matrix
  printf("The 90degree rotated of the matrix is:\n");
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      printf("%d\t",arr[i][j]);
    }
    printf("\n");
  }
  return 0;
}
