//Find the total number of pairs in the array whose sum is equal to the given value x
#include<stdio.h>
int main(){
  int n, arr[100];
  printf("Enter the numbers of element in the array:");
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    printf("Enter the %d element of the array:",i+1);
    scanf("%d",&arr[i]);
  }
  int x,pairs=0;
  printf("Enter the value of x:");
  scanf("%d",&x);
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      if(arr[i]+arr[j]==x)
        pairs++;
    }
  }
  printf("The total number of such possible pairs are: %d",pairs);
  return 0;
}