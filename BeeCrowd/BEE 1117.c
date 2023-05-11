#include<stdio.h>
int main(){
float a,avg,sum=0;int n,d=0;
    for(n=1;;n++){
        if(d==2){break;}
        scanf("%f",&a);
        if(a>=0&&a<=10){
            d++;
            sum=sum+a;
           // printf("%f %f",a,sum);
        }
        else{printf("nota invalida\n");}
    }
    avg=sum/2.0;
    printf("media = %.2f\n",avg);
return 0;
}

