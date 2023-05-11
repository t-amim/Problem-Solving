#include<stdio.h>
int main(){
int a,x,b=0,c=0;
scanf("%d",&a);
for(int i=1;i<=a;i++){
    scanf("%d",&x);
    if(x>=10&&x<=20){
       b=b+1;
    }
    else{
        c=c+1;
    }
}
printf("%d in\n%d out\n",b,c);
return 0;
}
