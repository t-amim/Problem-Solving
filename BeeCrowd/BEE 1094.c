#include<stdio.h>
int main(){
int n,i,n1;char c;
int sum=0,sum1=0,sum2=0,sum3=0;
scanf("%d",&n);
for(i=1;i<=n;i++){
    scanf("%d %c",&n1,&c);
    if(n1>=1&&n1<=15){
        if('C'==c){
            sum1=sum1+n1;
        }
        else if('R'==c){
            sum2=sum2+n1;
        }
        else if('S'==c){
            sum3=sum3+n1;
        }
    }
}
sum=sum1+sum2+sum3;
double cper=(sum1*100.00)/(sum*1.0);
double rper=(sum2*100.00)/(sum*1.0);
double sper=(sum3*100.00)/(sum*1.0);
printf("Total: %d cobaias\n",sum);
printf("Total de coelhos: %d\n",sum1);
printf("Total de ratos: %d\n",sum2);
printf("Total de sapos: %d\n",sum3);
printf("Percentual de coelhos: %.2lf %%\n",cper);
printf("Percentual de ratos: %.2lf %%\n",rper);
printf("Percentual de sapos: %.2lf %%\n",sper);
return 0;
}
