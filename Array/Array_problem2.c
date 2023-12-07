//Count the number of elements in given array greater than a given number x
#include<stdio.h>
int main(){
  int n, arr[100];
  printf("Enter the numbers of element in the array:");
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    printf("Enter the %d element of the array:",i+1);
    scanf("%d",&arr[i]);
  }
  int x,count=0;
  printf("Enter the number x:");
  scanf("%d",&x);
  printf("The Array is: ");
  for(int i=0;i<n;i++){
    printf("%d\t",arr[i]);
  }
  printf("\n");
  for(int i=0;i<n;i++){
    if(arr[i]>x)
      count++;
  }
  printf("The number in the array greater than %d is: %d",x,count);
  return 0;
}