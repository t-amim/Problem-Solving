#include<stdio.h>
int main(){
int a,b,c;
scanf("%d",&a);
for(b=1;b<=a;b++){
    scanf("%d",&c);
    if(c%2==0&&c>0)printf("EVEN POSITIVE\n");
    else if(c%2==0&&c<0)printf("EVEN NEGATIVE\n");
    else if(c%2!=0&&c>0)printf("ODD POSITIVE\n");
    else if(c%2!=0&&c<0)printf("ODD NEGATIVE\n");
    else printf("NULL\n");
}
return 0;
}
