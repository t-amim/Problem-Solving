#include<stdio.h>
int main(){
int a,b,n,sum=0;
scanf("%d",&a);
for(int j=1;;j++){
    scanf("%d",&b);
    if(b>0){
        n=b;
        break;
    }
    else{continue;}
}
for(int i=a;i<(a+n);i++){
    sum=sum+i;
}
printf("%d\n",sum);
return 0;
}
