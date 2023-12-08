//Given an array and a number 'x'. Find out if 'x' lies in the array or not, if yes then print the index
#include<stdio.h>
#include<stdbool.h>
int main(){
  int arr[10]={23,48,36,78,90,56,89,29,76,91};
  int n=10,x;
  bool flag=false;
  printf("Enter the number to search:");
  scanf("%d",&x);
  for(int i=0;i<n;i++){
    if(arr[i]==x){
      printf("%d is present in the array!!\n",arr[i]);
      printf("The index of element of the %d is : %d",x,i);
      flag=true;
      break;
    }
  }
  if(flag==false)
    printf("%d is not found in the array!!",x);
  return 0;
}