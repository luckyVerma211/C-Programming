/*To print the pattern:
A        A
AB      BA
ABC    CBA
ABCD  DCBA
ABCDEEDCBA
 */

#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int k=1;k<=i;k++){
            printf("%c",64+k);
        }
        for(int j=1;j<=n-i;j++){
            printf("  ");
        }
        for(int l=i;l>=1;l--){
            printf("%c",64+l);
        }
        printf("\n");
    }
    return 0;
}