//Write a program to copy the contents of one array into another in the reverse order
#include<stdio.h>
int main(){
  int n, arr1[100],arr2[100];
  printf("Enter the numbers of element in the array:");
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    printf("Enter the %d element of the array:",i+1);
    scanf("%d",&arr1[i]);
  }
  printf("The intial array is:");
  for(int i=0;i<n;i++)
    printf("%d\t",arr1[i]);
  printf("\n");
  for(int i=0;i<n;i++)
    arr2[i]=arr1[n-1-i];
  printf("The final array is:");
  for(int i=0;i<n;i++)
    printf("%d\t",arr2[i]);
  printf("\n");
  return 0;
}