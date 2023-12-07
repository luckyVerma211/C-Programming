//Find the second largest element in the array
#include<stdio.h>
#include<limits.h>
int main(){
  int n, arr[100];
  printf("Enter the numbers of element in the array:");
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    printf("Enter the %d element of the array:",i+1);
    scanf("%d",&arr[i]);
  }
  printf("The array is:");
  for(int i=0;i<n;i++)
    printf("%d\t",arr[i]);
  printf("\n");
  int max=INT_MIN;
  int sec_max=INT_MIN;
  for(int i=0;i<n;i++){
    if(arr[i]>max){
      sec_max=max; //smax is now previous max
      max=arr[i];  //max is now a new max
    }
    else if(sec_max<arr[i] && max!=arr[i]){ //max>arr[i]
      sec_max=arr[i];
    }
  }
  printf("The second maximum element is:%d",sec_max);
  return 0;
}