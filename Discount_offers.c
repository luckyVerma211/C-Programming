#include<stdio.h>
int main(){
    int bill,dis;
    printf("Enter the bill amount:");
    scanf("%d",&bill);
    if(bill<=1000){
        dis=0;
        printf("Sorry!! No dicount....\n");
        printf("Your total amount is: %d \n",bill);
    }
    else if(bill>1000 && bill<=3000){
        dis=10*bill/100;
        bill-=dis;
        printf("Congrats!! You got discount of 10%%.....\n");
        printf("Your discount amount is: %d \n",dis);
        printf("Your total amount is: %d \n",bill);
    }
    else if(bill>3000 && bill<=5000){
        dis=20*bill/100;
        bill-=dis;
        printf("Congrats!! You got discount of 20%%.....\n");
        printf("Your discount amount is: %d \n",dis);
        printf("Your total amount is: %d \n",bill);
    }
    else{
        dis=25*bill/100;
        bill-=dis;
        printf("Congrats!! You got discount of 25%%.....\n");
        printf("Your discount amount is: %d \n",dis);
        printf("Your total amount is: %d \n",bill);
    }
    return 0;
}