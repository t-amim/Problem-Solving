#include<stdio.h>
int main(){
    double a,b,c,d;
    scanf("%lf %lf %lf  %lf",&a,&b,&c,&d);
    double avg1=(a*2+b*3+c*4+d*1)/(2+3+4+1);
    printf("Media: %.1lf\n",avg1);
    if(avg1 >=7.0){
        printf("Aluno aprovado.\n");
    }
    else if(avg1>=5.0&& avg1<=6.9){
        printf("Aluno em exame.\n");
        double e,avg2;
        scanf("%lf",&e);
        printf("Nota do exame: %.1lf\n",e);
        avg2=(avg1+e)/2;
        if(avg2 >= 5.0){
        printf("Aluno aprovado.\n");
        }
        else if(avg2 <=4.9){
            printf("Aluno reprovado.\n");
        }
     printf("Media final: %.1lf\n",avg2);
    }
    else if(avg1<=4.9){
        printf("Aluno reprovado.\n");
    }
return 0;
}
