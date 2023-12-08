//Write a program to find a duplicate element from a given array of inetegers
//arr={1,2,1,4,5,6,7}, here elememt is 1
#include<stdio.h>

int main(){
  int arr[100],n;
  int arr2[10],k=0;
 
  printf("Enter the number of elements:");
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    printf("Enter the %d element of array:",i+1);
    scanf("%d",&arr[i]);
  }

  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      if(arr[i]==arr[j])
        arr2[k++]=arr[i];  
    }
  }
  printf("The duplicate elements are:");
  for(int i=0;i<k;i++)
    printf("%d ",arr2[i]);
  return 0;
}
