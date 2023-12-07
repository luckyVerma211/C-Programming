//Write a program to reverse the array without using any extra array
#include<stdio.h>
int main(){
  int n, arr[100];
  printf("Enter the numbers of element in the array:");
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    printf("Enter the %d element of the array:",i+1);
    scanf("%d",&arr[i]);
  }
  printf("The intial array is:");
  for(int i=0;i<n;i++)
    printf("%d\t",arr[i]);
  printf("\n");

  //Reversing the array
  for(int i=0;i<n/2;i++){
    int temp=arr[n-1-i];
    arr[n-i-1]=arr[i];
    arr[i]=temp;
  }
  /*Alternate method
  void reverse(int arr[]){
    int i=0;
    int j=n-1;
    while(i<j){
      int temp=arr[i];
      arr[i++]=arr[j];
      arr[j--]=temp;
    }
  }*/
  
  printf("The final array is:");
  for(int i=0;i<n;i++)
    printf("%d\t",arr[i]);
  printf("\n");
  return 0;
}