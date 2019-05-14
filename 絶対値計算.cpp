#include<stdio.h>
#include<math.h>
int main(void)
{
int a = 1;
int n;
double m;
int i;
//とてつもなく大きい数
double inf;
//合計
double kei;
printf("n=");
scanf("%d",&n);
if(n<=0){
printf("馬鹿野郎\n");
return 0;
}
m = 1 + 1 / (1 + a);
inf = sqrt(2);
for(i = 1;i <=n;i++){
    m = 1 + 1 / (1 + m);
}
kei = m - inf;
if(kei < 0){
kei = kei * -1;
}
printf("%.18f\n",m);
printf("%.18f\n",kei);
}