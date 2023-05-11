#include<stdio.h>
#include<math.h>
int main(){
    double a,b,c,d,r1,r2;
    scanf("%lf %lf %lf",&a,&b,&c);
        d= b*b - 4.0*a*c;
        r1=(-b+ (sqrt(d)))/(2.0*a);
        r2=(-b-( sqrt(d)))/(2.0*a);

        if(d<0 || a==0){
            printf("Impossivel calcular\n");
        }
        else{
            printf("R1 = %.5lf\n",r1);
            printf("R2 = %.5lf\n",r2);

        }
return 0;
}
