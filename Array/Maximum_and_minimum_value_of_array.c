#include<stdio.h>
int max(int arr[],int n){
  int max=arr[0];
  for(int i=0;i<n;i++){
    if(arr[i]>max)
      max=arr[i];
  }
  return max;
}
int min(int arr[],int n){
int min=arr[0];
  for(int i=0;i<n;i++){
    if(arr[i]<min)
      min=arr[i];
  }
  return min;
}
int main(){
  int n, A[100];
  printf("Enter the numbers of element in the array:");
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    printf("Enter the %d element of the array:",i+1);
    scanf("%d",&A[i]);
  }
  int maximum=max(A,n);
  int minimum=min(A,n);
  printf("The maximum value of array is: %d\n",maximum);
  printf("The minimum value of array is : %d\n",minimum);
  return 0;
}