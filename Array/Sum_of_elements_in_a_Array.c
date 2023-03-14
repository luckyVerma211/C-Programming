#include<stdio.h>
int main(){
    int a[100],n,s=0;
    printf("Enter the number of elements in a Array:");
    scanf("%d",&n);
    for(int ch=0;ch<n;ch++){
        printf("Enter the number:");
        scanf("%d",&a[ch]);
    }
    printf("The Array is:");
    for(int k=0;k<n;k++){
        printf("\t %d",a[k]);
    }
    for(int j=0;j<n;j++){
        s+=a[j];
    }
    printf("\n");
    printf("The Sum of the elements in the Array is:");
    printf("%d",s);
}