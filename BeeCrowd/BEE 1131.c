#include<stdio.h>
int main(){
int b,n1,n2,a,i=0,g=0,e=0,t=0;
for(b=1;;b++){
    scanf("%d%d",&n1,&n2);
    if(n1>n2){i++;}
    else if(n2>n1){g++;}
    else {e++;}
    t++;
    printf("Novo grenal (1-sim 2-nao)\n");
    scanf("%d",&a);
    if(a==1){continue;}
    else{break;}
}
printf("%d grenais\n",t);
printf("Inter:%d\n",i);
printf("Gremio:%d\n",g);
printf("Empates:%d\n",e);
if(i>g)printf("Inter venceu mais\n");
else if(g>i)printf("Gremio venceu mais\n");
else printf("Não houve vencedor\n");
//printf("%d %d %d %d",i,g,e,t);
return 0;
}
