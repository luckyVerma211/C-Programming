//Write a program to store roll number and marks obtained by 4 students side by side in a matrix
#include<stdio.h>
int main(){
  int num_stu,sub=3;
  printf("Enter the number of students:");
  scanf("%d",&num_stu);
  int stu[num_stu][sub];
  
  for(int i=0;i<num_stu;i++){
    printf("Enter the marks of Physics of roll no %d:",i+1);
    scanf("%d",&stu[i][0]);
    printf("Enter the marks of Chemistry of roll no %d:",i+1);
    scanf("%d",&stu[i][1]);
    printf("Enter the marks of Mathematics of roll no %d:",i+1);
    scanf("%d",&stu[i][2]);
  }

  printf("----The record of the CLASS----\n");
  printf("Rollno Physics Math Chemistry\n");
  for(int i=0;i<num_stu;i++){
    printf("%d\t%d\t%d\t%d",i+1,stu[i][0],stu[i][1],stu[i][2]);
    printf("\n");
  }
  return 0;
}