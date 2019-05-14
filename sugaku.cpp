#include<stdio.h>
#include<math.h>

double fn(double x){
double a = pow(x,4) + 5 * pow(x,3) + 6 * pow(x,2) - 4 * x -8;
return a;
}
double dfn(double x){
double b = 4 * pow(x,3) + 15 * pow(x,2) + 12 * x - 4;
return b;
}

int main(){
printf("\n問題１\n(i)ニュートン法\n");
const int Max = 60;
//int N = 0;
double x0 = -30;
//ここで配列を作ってその配列を利用して関数に代入していく
double X_n[Max + 1];
//初期値をx0にするために最初に初項を代入していく
X_n[0] = x0;
int countn;
double kinjin;
double gosan;
//ぐるぐる回転させる
for(int k = 0 ; k <= Max ; k++){
X_n[k + 1] = X_n[k] - fn(X_n[k]) / dfn(X_n[k]);
gosan = X_n[k + 1] - X_n[k];
if(gosan < 0){
gosan = gosan * (-1);
}
printf("%dと%dの誤差 : %12e\n",k,k + 1,gosan);
if(X_n[k + 1] == X_n[k]){
countn = k;
kinjin = X_n[k + 1];
break;
}
if(k == 50 && X_n[k + 1] != X_n[k]){
printf("50回では収束しない。\n");
break;
}
}
printf("反復回数N : %d\n近似解x(N) : %12e\n",countn,kinjin);
}
//これは表示されているのか
