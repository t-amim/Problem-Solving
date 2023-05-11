#include<stdio.h>
int main(){
    int a=0,sum=0;int n;
for(int i=1;;i++){
    scanf("%d",&n);
    if(n>=0){
        a++;
        sum=sum+n;
    }
    else{break;}
}
float avg=(sum*1.0)/a;
printf("%.2f\n",avg);
return 0;
}
