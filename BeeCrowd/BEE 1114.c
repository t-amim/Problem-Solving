#include<stdio.h>
int main(){
int a;
for(int i=1;;i++){
    scanf("%d",&a);
    if(2002 != a){
        printf("Senha Invalida\n");
    }
    else{printf("Acesso Permitido\n");
    break;}
}
return 0;
}
