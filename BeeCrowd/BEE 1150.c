#include<stdio.h>
int main(){
int x,a,y,b=0,sum=0;
scanf("%d",&x);
for(int i=1;;i++){
    scanf("%d",&a);
    if(a>x){
        y=a;
        break;
    }
    else{continue;}
}
//printf("%d %d",x,y);

for(int j=x;;j++){
    sum=sum+j;
    b++;
    if(sum>y){break;}
    else{continue;}
}
printf("%d\n",b);
return 0;
}
