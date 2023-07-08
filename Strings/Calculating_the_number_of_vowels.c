#include<stdio.h>
int main(){
    char str[20];
    int vow=0;
    printf("Enter the string:");
    gets(str);
    for(int i=0;str[i]!=0;i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
            vow++;
        if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
            vow++;
    } 
    printf("The numver of vowels in string is : %d",vow);
    return 0;
}