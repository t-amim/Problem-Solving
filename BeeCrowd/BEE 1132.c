#include<stdio.h>
int main(){
int a,b,i,max,min;int sum=0;
scanf("%d%d",&a,&b);
if(a>b){
    max=a;
    min=b;
}
else{
    max=b;
    min=a;
}
for(i=min;i<=max;i++){
    if(i%13 != 0){
        sum=sum+i;
    }
}
printf("%d\n",sum);
return 0;
}
