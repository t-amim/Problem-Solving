#include<stdio.h>
int main(){
int a,i;
for(i=1;;i++){
    scanf("%d",&a);
    if(a==0){break;}
    else{
        for(int j=1;j<a;j++){
            printf("%d ",j);
        }
        printf("%d\n",a);
    }
}
return 0;
}
