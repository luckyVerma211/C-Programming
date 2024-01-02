//Write a program to create a structure Employee which take Employee's Id, Name and salary, the user input should be taken from user and employee details should be shown using function. Then, find the Employee with maximum salary and display it's details.
#include<stdio.h>
struct Employee{
  int Empid;
  char Empname[40];
  int salary;
};
void input_Employee(struct Employee *E){
  printf("Enter the Employee Id:");
  scanf("%d",&E->Empid);
  printf("Enter the Employee Name:");
  fflush(stdin); 
  gets(E->Empname);
  printf("Enter the salary:");
  scanf("%d",&E->salary);  
}
void output_Employee(struct Employee *E){
  printf("%d\t\t%s\t\t%d",E->Empid,E->Empname,E->salary);
  printf("\n");
}
int main(){
  struct Employee E[100];
  int n;
  printf("Enter the numbers of employee to be added:");
  scanf("%d",&n);
  //Employee details input 
  for(int i=0;i<n;i++){
    printf("Enter the Details of Employee %d\n",i+1);
    input_Employee(&E[i]);
  }
  printf("\n");
  //Display of Employee Details
  printf("\t EMPLOYEE LIST\n");
  printf("Empolyee's id \tEmployee's Name\t Salary\n");
  for(int i=0;i<n;i++){
    output_Employee(&E[i]);
  }
  printf("\n");
  //Finding the index of employee with maximum salary
  int max_idx=0;
  int max_sal=0;
  for(int i=0;i<n;i++){
    if(E[i].salary>max_sal){
      max_sal=E[i].salary;
      max_idx=i;
    }
  }
  //Displaying the details of Employee having maximum salary
  printf("The Details of Maximum salary employee is:\n");
  printf("Employee's id: %d\n",E[max_idx].Empid);
  printf("Employee's name: %s\n",E[max_idx].Empname);
  printf("Employee's salary: %d\n",E[max_idx].salary);
  return 0;
}
