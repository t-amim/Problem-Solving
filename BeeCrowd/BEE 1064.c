#include<stdio.h>
int main(){
double a,sum=0;
int i,b=0;
for(i=1; i<=6; i++){
    scanf("%lf",&a);
    if(a>=0){
        b=b+1;
        sum=sum+a;
    }
}
     printf("%d valores positivos\n",b);
    printf("%.1lf\n",(sum/b));

return 0;
}
