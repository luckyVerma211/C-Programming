#include <stdio.h>
int main()
{
   long int n,s=0,num;
   printf("Enter the number:");
   scanf("%ld",&n);
   num=n;
   while(n!=0){
      n/=10;
      s++;
   }
   printf("The number of digit in %ld is: %ld",num,s);
   return 0;
}