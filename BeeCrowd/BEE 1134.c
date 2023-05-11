#include<stdio.h>
int main(){
int n,a=0,b=0,c=0,d,i;
for(i=1;;i++){
    scanf("%d",&n);
    if(n==1){a++;}
    else if(n==2){b++;}
    else if(n==3){c++;}
    else if(n==4){break;}
    else {continue;}
}
printf("MUITO OBRIGADO\n");
printf("Alcool: %d\n",a);
printf("Gasolina: %d\n",b);
printf("Diesel: %d\n",c);
return 0;
}
