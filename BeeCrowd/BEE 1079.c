#include<stdio.h>
int main(){
int n;double a,b,c;
scanf("%d",&n);
for(int i=1;i<=n;i++){
    scanf("%lf%lf%lf",&a,&b,&c);
    double avg=(a*2+b*3+c*5)/(2+3+5);
    printf("%.1lf\n",avg);
}
return 0;
}
