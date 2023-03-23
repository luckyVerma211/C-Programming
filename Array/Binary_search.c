#include<stdio.h>
int main(){
    int a[10]={12,14,21,26,37,67,78,89,92,99};
    int beg=0, end=9, mid,num;
    printf("Enetr the number to be searched:");
    scanf("%d",&num);
    while(beg<=end){
        mid=(beg+end)/2;
        if(a[mid]==num){
            printf("\n %d found at position %d",num,mid);
            break;
        }
        else if(num>a[mid]){
            beg=mid+1;
        }
        else if(num<a[mid]){
            end=mid-1;
        }
    }
    if(beg>end){
        printf("%d Not Found in Array!!",num);
    }
}
