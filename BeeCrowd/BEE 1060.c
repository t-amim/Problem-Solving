#include<stdio.h>
int main(){
int i,sum=0;double x;
for(i=1;i<=6;i++){
    scanf("%lf",&x);
    if(x>0){
       sum=sum+1;
    }
}
printf("%d valores positivos\n",sum);

return 0;
}
