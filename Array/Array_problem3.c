//Find the difference between the sum of elements at even indices to the sum of elements at odd indices
#include<stdio.h>
int main(){
  int n, arr[100];
  printf("Enter the numbers of element in the array:");
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    printf("Enter the %d element of the array:",i+1);
    scanf("%d",&arr[i]);
  }
  int odd_sum=0;
  int even_sum=0;
  for(int i=0;i<n;i++){
    if(i%2==0)
      even_sum+=arr[i];
    else
      odd_sum+=arr[i];
  }
  printf("The Array is: ");
  for(int i=0;i<n;i++){
    printf("%d\t",arr[i]);
  }
  printf("\n");
  printf("The difference of elements at odd and even indexed elements is: %d",even_sum-odd_sum);
  return 0;
}