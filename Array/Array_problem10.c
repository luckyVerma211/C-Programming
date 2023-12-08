//Rotate the given array 'a' by k steps, where k is non-negative
//NOTE: k can be greater than n as well where n is the size of array 'a'
//arr={1,2,3,4,5,6,7}
//After k=3; arr={5,6,7,1,2,3,4}
#include<stdio.h>
void part_reverse(int arr[],int si,int ei){
  for(int i=si,j=ei;i<j;i++,j--){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
  }
}
int main(){
  int n,arr[100];
  int k;
  printf("Enter the number of elements:");
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    printf("Enter the %d element of array:",i+1);
    scanf("%d",&arr[i]);
  }
  printf("Enter the value of k:");
  scanf("%d",&k);
  printf("The initial array is:");
  for(int i=0;i<n;i++){
    printf("%d\t",arr[i]);
  }
  printf("\n");
  if(k>n)
    k=k%n;
  part_reverse(arr,0,n-1);  //Reversing the array
  part_reverse(arr,0,k-1);  //Reversing the first k elements
  part_reverse(arr,k,n-1);  //Reversing the last k elements
  printf("The final array is:");
  for(int i=0;i<n;i++){
    printf("%d\t",arr[i]);
  }
  return 0;
}