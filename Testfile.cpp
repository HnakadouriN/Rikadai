#include<stdio.h>
#include<math.h>
int main(void)
{
int n;
double i;
double s = 0;
double total = 0;
printf("n=");
scanf("%d",&n);
for(i = 0;i<=n;i++){
    double s_under = (4*i + 1) * (4*i + 3);
    s += 2 / s_under;
}
s = s*4;
printf("%.16f\n",s);
}