#include <stdio.h>
int main()
{
   int age;
   printf("WELCOME TO DRIVING LICENSE CHECKER.......");
   printf("\nEnter the age:");
   scanf("%d",&age);
   if(age>18){
      printf("You are eligible to apply for Driving License!!");
   }
   if(age<=18){
      age=18-age;
      if(age==0){
         printf("Sorry try after 1 years for Driving License!!");
      }
      else{
         printf("Sorry try after %d years for Driving License!!",age);
      }
   }

   return 0;
}