#include<stdio.h>
int main(){
   double eps = 1.0;
   while(1.0 + eps != 1.0){
   eps = eps / 2;
   }
   eps = eps * 2;
   printf("%.20e\n",eps);
   double eps1 = 1 + eps/2;
   double eps2 = 1 + (3/4 * eps);
   double eps3 = 1 + eps;
   double eps4 = 2 - eps/2;
   double eps5 = 2 - (3/4 * eps);
   double eps6 = 2 + eps;
   printf("%.20e\n",eps1);
   printf("%.20e\n",eps2);
   printf("%.20e\n",eps3);
   printf("%.20e\n",eps4);
   printf("%.20e\n",eps5);
   printf("%.20e\n",eps6);
}