#include<stdio.h>
int main(){
int i,j,T;
int N[1000];
scanf("%d",&T);
for(i=0,j=0;i<1000;i++){
    printf("N[%d] = %d\n",i,j);
    j++;
    if(j==T){j=0;}
    //if(i==999){break;}
}
return 0;
}
