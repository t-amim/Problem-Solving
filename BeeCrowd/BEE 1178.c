#include<stdio.h>
int main(){
int a,b;
double n;
scanf("%lf",&n);
for(a=0;a<100;a++){
    printf("N[%d] = %.4lf\n",a,n);
    n=n/2;
}
return 0;
}
