#include<stdio.h>
int main(){
int n,a,i,j,sum=0;
scanf("%d",&n);
for(i=1;i<=n;i++){
    scanf("%d",&a);
    for(j=1;j<=(a-1);j++){
        if(a%j==0){
            sum=sum+j;
        }


//printf("%d ",j);
    }
    if(sum==a){
        printf("%d eh perfeito\n",a);
    }
    else{
        printf("%d nao eh perfeito\n",a);
    }
    sum=0;
}
return 0;
}
