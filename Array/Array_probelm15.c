//Find the unique number in a given Array where all the elements are being repeated twice with one value being unique
#include<stdio.h>
#include<stdbool.h>
int main(){
  int arr[100],n;
  int unique_num;
  printf("Enter the number of elements:");
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    printf("Enter the %d element of array:",i+1);
    scanf("%d",&arr[i]);
  }

  for(int i=0;i<n;i++){
    bool flag=false;
    for(int j=i+1;j<n;j++){
      if(arr[i]==arr[j]){
        flag=true;
      }  
    }
    if(flag==false){
      printf("%d is a unique number!!",arr[i]);
      break;
    }
  }
  return 0;
}