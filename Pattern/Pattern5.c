/*To print the pattern:
A
BB
CCC
DDDD
EEEEE    */

#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int k=1;k<=i;k++){
            printf("%c",i+64);
        }
        printf("\n");
    }
    return 0;
}