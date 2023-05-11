#include<stdio.h>
int main(){
double s,t;//s=salary t=tax
scanf("%lf",&s);
if(s<=2000.00){
    printf("Isento\n");
}
else{
    double dif=s-2000;
    if(dif<=1000){
        t=dif*.08;
        printf("R$ %.2lf\n",t);
    }
    else {
        dif=s-3000;
        if(dif<=1500){
            t=80+(dif*0.18);
            printf("R$ %.2lf\n",t);
        }
        else{
            dif=s-4500;
            t=80+270+(dif*0.28);
            printf("R$ %.2lf\n",t);
        }
    }
}
return 0;
}
