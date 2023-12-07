//Count the number of triplets whose sum is equal to the given value x
#include<stdio.h>
int main(){
  int n, arr[100];
  printf("Enter the numbers of element in the array:");
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    printf("Enter the %d element of the array:",i+1);
    scanf("%d",&arr[i]);
  }
  int x,triplets=0;
  printf("Enter the value of x:");
  scanf("%d",&x);
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      for(int k=j+1;k<n;k++){
        if(arr[i]+arr[j]+arr[k]==x)
          triplets++;
      }
    }
  }
  printf("The total number of such possible triplets are: %d",triplets);
  return 0;
}