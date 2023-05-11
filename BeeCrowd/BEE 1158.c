#include<stdio.h>
int sumall(){
    int a,b,sum=0;
    scanf("%d%d",&a,&b);
    if(a%2 != 0){
        for(int i=a;i<a+b*2;i=i+2){
            sum=sum+i;
        }
    }
    else{
        for(int i=(a+1);i<=a+b*2;i=i+2){
            sum=sum+i;
        }
    }
return sum;
}

int main(){
int n;
scanf("%d",&n);
for(int i=1;i<=n;i++){
    printf("%d\n",sumall());
}
return 0;
}

