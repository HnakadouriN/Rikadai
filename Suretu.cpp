#include<stdio.h>
int main(void)
{
//n=0の時の値
int a = 1;
int n;
double m;
int i;
//ここで初項を表す
m = 1 + 1 / (1 + a);
printf("n=");
scanf("%d",&n);
//繰り返し
for(i = 1;i <= n;i++){
    m = 1 + 1 / (1 + m);
}
//ここで小数点以下18桁を表示
printf("%.18f\n",m);
}