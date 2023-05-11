#include<stdio.h>
void avarage(){    ///function declaration
double n,avg,sum=0; int i,d=0;
for(i=1;;i++){
    if(d==2){break;}
    scanf("%lf",&n);
    if(n>=0&&n<=10){
        sum=sum+n;
        d++;
    }
    else{printf("nota invalida\n");}
}
avg=sum/2.0;
printf("media = %.2lf\n",avg);
}

int main(){
int a;
avarage();
for(int i=0;;i++){
    printf("novo calculo (1-sim 2-nao)\n");
    scanf("%d",&a);
    if(a==1){
        avarage();
    }
    else if(a==2){
        break;
    }
    else{}
}
return 0;
}
