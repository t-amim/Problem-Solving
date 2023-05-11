#include<stdio.h>
int main(){
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    if((a+b)>c&&(b+c)>a&&(c+a)>b){
        double p=a+b+c;
        printf("Perimetro = %.1lf\n",p);
    }
    else{
        double ar=.5*(a+b)*c;
        printf("Area = %.1lf\n",ar);
    }
return 0;
}
