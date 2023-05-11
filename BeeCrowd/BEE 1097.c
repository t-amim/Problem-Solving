#include<stdio.h>
int main(){
int i,j,a;
for(i=1,a=7;i<=9,a<=15;i=i+2,a=a+2){
    for(j=a;j>a-3;j--){
        printf("I=%d J=%d\n",i,j);
    }
}
return 0;
}
