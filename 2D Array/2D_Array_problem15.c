//Given a positive integer n, generate a nxn matrix filled with elements from 1 to n^2 in spiral order(LeetCode-59)
/*Matrix n=3:
1 2 3 
8 9 4
7 6 5
*/
#include<stdio.h>
int main(){
  int A[100][100];
  int n;
  printf("Enter the number of rows/columns of Matrix:");
  scanf("%d",&n);
  //Spiral Order
  int minr=0;
  int maxr=n-1;
  int minc=0;
  int maxc=n-1;
  int tne=n*n; //Total number of elements
  int count=0;
  int fill=1;
  while(count<tne){
    //print the minimum row
    for(int j=minc;j<=maxc;j++){
      A[minr][j]=fill;
      fill++;
      count++;
    }
    minr++;
    if(count>=tne) break;
    //Print the maximum column
    for(int i=minr;i<=maxr;i++){
      A[i][maxc]=fill;
      fill++;
      count++;
    }
    maxc--;
    if(count>=tne) break;
    //Print the maximum row(reverse order)
    for(int  j=maxc;j>=minc;j--){
      A[maxr][j]=fill;
      fill++;
      count++;
    }
    maxr--;
    if(count>=tne) break;
    //Print the minimum column(reverse order)
    for(int i=maxr;i>=minr;i--){
      A[i][minc]=fill;
      fill++;
      count++;
    }
    minc++;
  }
  //Printing of Matrix
  printf("\n");
  printf("The Matrix formed is:\n");
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      printf("%d\t",A[i][j]);
    }
    printf("\n");
  }
  return 0;
}