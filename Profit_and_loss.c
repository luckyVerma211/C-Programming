#include<stdio.h>
int main(){
    int sp,cp,am;
    printf("Enter the cost price:");
    scanf("%d",&cp);
    printf("Enter the selling price:");
    scanf("%d",&sp);
    if(sp>cp){
        am=sp-cp;
        printf("Woww!! You made Profit....\n");
        printf("Your Profit is: %d\n",am);
    }
    else if(sp==cp){
        printf("No Profit and No Loss :)\n");
    }
    else{
        am=cp-sp;
        printf("Ooops!! You made Loss....\n");
        printf("Your Loss is: %d\n",am);
    }

}