#include<stdio.h>
int year(){
int pa, pb,a,b,y=1;double g1, g2;
scanf("%d%d%lf%lf",&pa,&pb,&g1,&g2);
a=pa;b=pb;
//a=a+(a*(g1/100));b=b+(b*(g2/100));
for(int i=1;;i++){
    a=a+(a*(g1/100));b=b+(b*(g2/100));
    if(b>=a){y++;}
    else{break;}
    //a=a+(a*(g1/100));b=b+(b*(g2/100));
}
return y;
}

int main(){
int n;
scanf("%d",&n);
for(int i=1;i<=n;i++){
    int ny=year();
    if(ny>100){printf("Mais de 1 seculo.\n");}
    else{printf("%d anos.\n",ny);}
}
return 0;
}
