///rubi
#include <stdio.h>

int main() {
    double a,b,avg;
    int op=1;
    while(op!=2){
        do{
            scanf("%lf",&a);
            if(a<0.0 || a>10.0)printf("nota invalida\n");
        }while(a<0.0 || a>10.0);

         do{
            scanf("%lf",&b);
            if(b<0.0 || b>10.0)printf("nota invalida\n");
        }while(b<0.0 || b>10.0);

        avg=(a+b)/2.0;
        printf("media = %.2lf\n",avg);

        do{
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d",&op);
        }while(op<1 || op>2);
    }

    return 0;
}
