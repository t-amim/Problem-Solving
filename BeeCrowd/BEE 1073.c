#include<stdio.h>
int main(){
int N,b;
scanf("%d",&N);
    for(b=1;b<=N;b++){
        if(b%2==0){
            printf("%d^2 = %d\n",b,(b*b));
        }
    }
return 0;
}
