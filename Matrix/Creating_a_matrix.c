#include<stdio.h>
int main(){
    int A[100][100];
    int m,n;
    printf("Enter the number of rows:");
    scanf("%d",&m);
    printf("Enter the number of columns:");
    scanf("%d",&n);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("Enter the element:");
            scanf("%d",&A[i][j]);
        }
    }
    printf("The Matrix Created is:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d\t",A[i][j]);
        }
        printf("\n");
    }
    return 0;
}
