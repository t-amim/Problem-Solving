#include<stdio.h>

int main(){
    int n,a,b,c,d,count=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d %d %d",&a,&b,&c);
        d=a+b+c;
        if(d>=2){
            count++;
        }
    }

printf("%d",count);
return 0;
}
