//Reverse a part of array
//arr={1,2,3,4,5,6,7},i=1,j=4
//arr={1,5,4,3,2,6,7}
#include<stdio.h>
void part_reverse(int arr[],int si,int ei){
  for(int i=si,j=ei;i<j;i++,j--){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
  }
}
int main(){
  int arr[100],n;
  int starting_index,ending_index;
  printf("Enter the number of elements:");
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    printf("Enter the %d element of array:",i+1);
    scanf("%d",&arr[i]);
  }
  printf("Enter the starting index of element to be reversed:");
  scanf("%d",&starting_index);
  printf("Enter the ending index of element to be reversed:");
  scanf("%d",&ending_index);

  printf("The initial array is:");
  for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
  }
  printf("\n");
  part_reverse(arr,starting_index,ending_index); 
  printf("The array formed is:\n");
  for(int i=0;i<=6;i++)
    printf("%d ",arr[i]);
}