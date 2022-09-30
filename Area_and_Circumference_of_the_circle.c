#include<stdio.h>
int main(){
    float ra,ar,cr;
    printf("Enter the Radius of the circle(in m):");
    scanf("%f",&ra);
    ar=3.14*(ra*ra);
    cr=2*3.14*ra;
    printf("\nThe area of the circle is: %f sq m",ar);
    printf("\nThe circumference of the circle is: %f m",cr);
    return 0;
}