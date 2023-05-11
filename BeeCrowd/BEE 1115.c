#include<stdio.h>
int main(){
int a,b;
for(int i=1;;i++){
    scanf("%d%d",&a,&b);
    if(a>0&&b>0){printf("primeiro\n");}
    else if(a<0&&b>0){printf("segundo\n");}
    else if(a<0&&b<0){printf("terceiro\n");}
    else if(a>0&&b<0){printf("quarto\n");}
    else {break;}
}
return 0;
}
