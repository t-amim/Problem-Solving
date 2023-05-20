#include<stdio.h>
int main(){
    int n,i,x=0,sum;char bit[5];
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf(" %s",&bit);
        if(bit[1]=='+'){
            x=x+1;
        }
        else{x=x-1;}
    }
    printf("%d\n",x);
return 0;
}
