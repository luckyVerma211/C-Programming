/*To print the pattern:
    1
   121
  12321
 1234321
123454321    */

#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=n;j>i;j--){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("%d",k);
        }
        for(int f=i-1;f>=1;f--){
            printf("%d",f);
        }
        printf("\n");
    }

}
