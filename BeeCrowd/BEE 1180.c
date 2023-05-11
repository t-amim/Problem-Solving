#include<stdio.h>
int main(){
int n,a=0;
scanf("%d",&n);
int x[n];
for(int i=0;i<n;i++){
    scanf("%d",&x[i]);
}
int min=x[0];
for(int j=0;j<n;j++){
    if(min>x[j]){
        min=x[j];
        a=j;
    }
}
printf("Menor valor: %d\nPosicao: %d\n",min,a);
return 0;
}
