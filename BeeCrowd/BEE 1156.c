#include<stdio.h>
int main(){
int a,b;double sum=0;
for(a=1,b=1;a<=39;a=a+2,b=b*2){
    sum=sum+((a*1.0)/(b*1.0));
}
printf("%.2lf\n",sum);
return 0;
}
