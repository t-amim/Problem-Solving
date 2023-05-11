#include<stdio.h>
int main(){
int a,b,sum;
for(int i=1;;i++){
    scanf("%d%d",&a,&b);
    if(a>0&&b>0){
        //printf("%d,%d",a,b);
        int max,min;
        if(a>b){
            max=a;min=b;
        }
        else {max=b;min=a;}
        sum=0;
        for(int j=min;j<=max;j++){
            printf("%d ",j);
            sum=sum+j;
            //printf("Sum=%d\n",sum);
        }
        printf("Sum=%d\n",sum);

    }


    else{break;}
}
return 0;
}
