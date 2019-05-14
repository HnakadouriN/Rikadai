#include<stdio.h>
int main(){
    double i;
    int ten;
    double two = 0;
    double keta = 1;
    printf("10進数 = ");
    scanf("%d",&ten);
while(ten>0) {
two = two + ((ten % 2)*keta);
ten = ten / 2;
keta = keta * 10;
}
printf("2進数 = %.0f\n",two);
}