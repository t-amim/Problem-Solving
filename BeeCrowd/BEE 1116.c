#include<stdio.h>
int main(){
int n,x,y;double div;
scanf("%d",&n);
for(int i=1;i<=n;i++){
    scanf("%d%d",&x,&y);
    if(y==0){printf("divisao impossivel\n");}
    else{
        div=(x*1.00)/y;
        printf("%.1lf\n",div);
    }
}
return 0;
}
