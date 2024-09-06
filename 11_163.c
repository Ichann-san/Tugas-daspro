#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void solve(void){
int a, b, c, temp = 0;
printf("M : ");
scanf("%d", &a);
printf("N : ");
scanf("%d", &b);
temp = a;
c = pow(a, 2) + pow(b, 2);
a = pow(temp, 2) - pow(b, 2);
b *= 2*temp;
printf("Triple phytagoras yang memenuhi adalah %d %d %d", a, b, c);
}

int main(){
int n=1;
while(n--){
solve();
}
return 0;
}

/*
input :
m dan n

output :
triple phytagoras dengan m dan n menggunakan rumus yang ada pada soal
*/