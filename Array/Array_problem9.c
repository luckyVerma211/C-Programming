//If an array contains n elements, then check if the given array is a palindrome or not
#include<stdio.h>
int main(){
  int n, arr1[100],arr2[100];
  printf("Enter the numbers of element in the array:");
  scanf("%d",&n);
  //Inputing the first array
  for(int i=0;i<n;i++){
    printf("Enter the %d element of the array:",i+1);
    scanf("%d",&arr1[i]);
  }
  //Printing the first array
  printf("The Array is:");
  for(int i=0;i<n;i++)
    printf("%d\t",arr1[i]);
  printf("\n");
  //Reversing the array
  for(int i=0;i<n;i++)
    arr2[i]=arr1[n-1-i];
  //Checking if array is palinrome or not
  int count=0;
  for(int i=0;i<n;i++){
    if(arr1[i]!=arr2[i])
    count++;
  }
  if(count!=0)
    printf("The array is not Palindrome!!");
  else
    printf("The array is Palindrome!!");
  return 0;
}