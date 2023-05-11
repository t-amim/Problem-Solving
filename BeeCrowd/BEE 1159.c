#include<stdio.h>
int sumall(int a){
    int sum=0;
    if(a%2 == 0){
        for(int i=a;i<a+5*2;i=i+2){
            sum=sum+i;
        }
    }
    else{
        for(int i=(a+1);i<=a+5*2;i=i+2){
            sum=sum+i;
        }
    }
return sum;
}

int main(){
int n;
for(int i=1;;i++){
    scanf("%d",&n);
    if(n !=0){
    printf("%d\n",sumall(n));
    }
    else{break;}
}
return 0;
}
