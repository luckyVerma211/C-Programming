#include<stdio.h>
int main(){
    char name[20];
    int count=0;
    printf("Enter the string:");
    gets(name);
    for(int i=0;name[i]!=0;i++){
        count++;
    }
    printf("The length of the string is: %d",count);
    return 0;
}
