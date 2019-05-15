#include<stdio.h>
#include<math.h>
//マシンイプシロンを出す関数
 double machine_eps(){
       double eps = 1.0;
       //ここで成り立つまでぶん回す
   while(1.0 + eps != 1.0){
   eps = eps / 2;
   }
   eps = eps * 2;
   return eps;
   }
int main(){
//マシンイプシロンをxと置く
   double x = machine_eps();
   double eps1 = 1 + x/2;
   double eps2 = 1 + (3/4 * x);
   double eps3 = 1 + x;
   double eps4 = 2 - x/2;
   double eps5 = 2 - (3/4 * x);
   double eps6 = 2 + x;
   printf("%.20e\n",x);
   printf("%.20e\n",eps1);
   printf("%.20e\n",eps2);
   printf("%.20e\n",eps3);
   printf("%.20e\n",eps4);
   printf("%.20e\n",eps5);
   printf("%.20e\n",eps6);
  printf("%f\n",pow(4,3));
}