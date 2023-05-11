#include<stdio.h>
int main(){
int a,b;
for(int i=1;;i++){
    scanf("%d%d",&a,&b);
    if((a>b)||(b>a)){
        if(a>b){printf("Decrescente\n");}
        else{printf("Crescente\n");}
    }
    if(a==b){break;}
}
return 0;
}
