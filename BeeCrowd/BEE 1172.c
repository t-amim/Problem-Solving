#include<stdio.h>
int main(){
int x[10];
for(int i=0;i<=9;i++){
    scanf("%d",&x[i]);
}
//printf("%d",x[2]);
for(int j=0;j<=9;j++){
    if(x[j]<=0){
        x[j]=1;
       // printf("x[%d] = %d\n",j,x[j]);
    }
        printf("X[%d] = %d\n",j,x[j]);
}
return 0;
}
