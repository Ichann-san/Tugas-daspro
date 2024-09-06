#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void solve(void){
float x1, x2, xt, y1, y2, yt, gradien1, gradien2, b2;

printf("Masukkan koordinat\n"); //ini input
for(int i=1; i<=2; i++){
printf("X%d  Y%d : ", i, i);
switch(i){
case 1 :
scanf("%f %f", &x1, &y1);
break;
case 2 :
scanf("%f %f", &x2, &y2);
break;
}}

gradien1 = (y2-y1)/(x2-x1);
gradien2 = -1/gradien1;
xt = (x1+x2)/2;//x tengah garis 1
yt = (y1+y2)/2;//y tengah garis 1
b2 = yt-(gradien2*xt);//b pada persamaan y = mx+b di garis 2

printf("\n\n");//output
if(y2-y1 != 0){
if(x1-x2 == 0){
printf("Gradien garis pertama tidak terdefinisi dikarenakan pembagian dengan 0\n");
} else {
printf("Gradien garis pertama      : %.2f\n", gradien1);
}
printf("Titik tengah garis pertama : %.2f %.2f\n", xt, yt);
printf("Gradien garis baru         : %.2f\n", gradien2);
if(b2>=0){
printf("Persamaan garis baru       : %.2fx+%.2f", gradien2, b2);
} else {
printf("Persamaan garis baru       : %.2fx%.2f", gradien2, b2);
}} else {
printf("Gradien garis pertama      : %.2f\n", gradien1);
printf("Titik tengah garis pertama : %.2f %.2f\n", xt, yt);
printf("Gradien garis baru tidak terdefinisi dikarenakan pembagian dengan 0\n");
printf("Persamaan garis baru tidak terdefinisi dikarenakan pembagian dengan 0");
}}

int main(){
int n=1;
while(n--){
solve();
}
return 0;
}

/*
input koordinat 2 titik, kita mencari
1. gradien garis 1
2. titik tengah garis 1
3. gradien pada garis baru yang dibuat arah berlawanan di titik tengah garis 1
4. persamaan garis baru tersebut
*/