#include<stdio.h>
int main(){
int n,i,j; int x,y,max,min;

scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d%d",&x,&y);
        if(x>y){
            max=x;
            min=y;
        }
        else{
            max=y;
            min=x;
        }
        //printf("%d, %d\n",min,max);
        int a=min+1;int sum=0;
        for(j=a;j<max;j++){
            if(j%2 != 0){
                sum=sum+j;
            }
        }
        printf("%d\n",sum);

    }
return 0;
}
