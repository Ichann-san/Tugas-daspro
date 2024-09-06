#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void solve(void){
float s, v;
printf("Input kecepatan : ");
scanf("%f", &v);
printf("Input jarak     : ");
scanf("%f", &s);
float a = v/(2*s/v);
printf("Akselerasi       : %.3f", a);
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
v = kecepatan
s = jarak

output :
a = akselerasi
*/