#include<stdio.h>
int main(){
int a,b,time;
scanf("%d %d",&a,&b);
if(b>a){
    time=b-a;
    printf("O JOGO DUROU %d HORA(S)\n",time);
}
else if(a>b){
    time=abs(24-a)+b;
    printf("O JOGO DUROU %d HORA(S)\n",time);
}
else if(a==b){
    time=24;
    printf("O JOGO DUROU %d HORA(S)\n",time);
}
return 0;
}
