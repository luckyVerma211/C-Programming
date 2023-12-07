//Given an array of integers, change the value of all odd indexed elements to its second multiple and increment all even indexed value by 10
#include<stdio.h>
int main(){
  int n, arr[100];
  printf("Enter the numbers of element in the array:");
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    printf("Enter the %d element of the array:",i+1);
    scanf("%d",&arr[i]);
  }
  printf("The initial array is: ");
  for(int i=0;i<n;i++){
    printf("%d\t",arr[i]);
  }
  printf("\n");
  for(int i=0;i<n;i++){
    if(i%2==0)
      arr[i]=arr[i]+10;
    else
      arr[i]*=2;
  }
  printf("The final array is: ");
  for(int i=0;i<n;i++){
    printf("%d\t",arr[i]);
  }
  return 0;
}