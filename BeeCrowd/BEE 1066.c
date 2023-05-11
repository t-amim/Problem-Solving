#include<stdio.h>
int main(){
int a,b=0,c=0,d=0,e=0;
for(int i=1;i<=5;i++){
     scanf("%d",&a);
     if(a%2==0){
        b=b+1;
     }
     if(a%2!=0){
        c=c+1;
     }
     if(a>0){
        d=d+1;
     }
     if(a<0){
        e=e+1;
     }
}
     printf("%d valor(es) par(es)\n",b);
     printf("%d valor(es) impar(es)\n",c);
     printf("%d valor(es) positivo(s)\n",d);
     printf("%d valor(es) negativo(s)\n",e);

return 0;
}
