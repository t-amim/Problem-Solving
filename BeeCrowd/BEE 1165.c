#include<stdio.h>
int main(){
int n,a,i,x=0;
scanf("%d",&n);
for(i=1;i<=n;i++){
    scanf("%d",&a);
    for(int j=2;j<=(a-1);j++){
        if(a%j== 0){
            x=1;
            break;
        }
    }
    if(x==1){
        printf("%d nao eh primo\n",a);
    }
    else{
        printf("%d eh primo\n",a);
    }
    x=0;
}
return 0;
}
