#include<stdio.h>
int main(){
int a[20]; int b[20]; int i,j,k;
for(i=0;i<20;i++){
    scanf("%d",&a[i]);
}
for(j=0,k=19;i<20,k>=0;j++,k--){
    b[j]=a[k];
    printf("N[%d] = %d\n",j,b[j]);
}
return 0;
}
