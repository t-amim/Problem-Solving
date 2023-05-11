#include<stdio.h>
int main(){
int i,j,a,b;
scanf("%d%d",&a,&b);
for(i=1;i<=b;i++){
     if(i%a==0) {printf("%d",i);}
     else{printf("%d ",i);}
     if(i%a==0){
        printf("\n");
     }
}
return 0;
}
