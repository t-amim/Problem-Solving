#include<stdio.h>
int main(){
int a,b,i,j,k;
long long int fib[60];
fib[0]=0; fib[1]=1;
scanf("%d",&a);
for(i=1;i<=a;i++){
    scanf("%d",&b);
    for(j=2;j<=b;j++){
        fib[j]=fib[j-1]+fib[j-2];
    }
     //printf("Fib(%d) = %lld\n",b,fib[j]);
    for(k=0;k<=b;k++){
        if(k==b){
            printf("Fib(%d) = %lld\n",b,fib[k]);
        }
    }
}
return 0;
}
