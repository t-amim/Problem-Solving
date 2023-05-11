#include<stdio.h>
int main(){
int a,i;
scanf("%d",&a);
int x[10];
for(i=0;i<=9;i++){
    x[i]=a;
    a=a*2;
    printf("N[%d] = %d\n",i,x[i]);
}
//printf("N[%d] = %d\n",i,x[i]);
return 0;
}
