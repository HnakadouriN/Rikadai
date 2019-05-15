#include<stdio.h>
#include<math.h>
double f(double x){
    return pow(x,4) + 5 * pow(x,3) + 6 * pow(x,2) - (4 * x) - 8;
}
double df(double x){
    return 3 * pow(x,3) + 15 * pow(x,2) + 12 * x - 4;
}
int main(){
    double xs = 1;
    int Max = 60;
    int N;
    double x0 = -30;
    double X[Max+1];
    X[0] = x0;
    double eps = 1e-7;
    for(int k = 0; k<Max;k++){
       if(fabs(f(X[k]))<eps){
           N = k;
           printf("Newton Convergence\n N = %d, x_N = %.12e, Error = %.2e\n" ,N,X[k],fabs(X[k]-xs));
           break;
       }
       X[k+1] = X[k] - f(X[k])/df(X[k]);
       printf("%d\t%.12e\t%.2e\t%.2e\n",k+1,X[k+1],fabs(X[k+1]-xs),log(fabs(fabs(X[k+1]-xs))/log(fabs(X[k]-xs))));
    }
}