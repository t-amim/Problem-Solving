#include<stdio.h>
int main(){
int a,b,c=0;int d=0;
int num[9];
for(a=0;a<=9;a++){
    scanf("%d",&num[a]);
}
for(b=0;b<=9;b++){
    if(num[b]>c){
    c=num[b];
    d=b+1;}
}
printf("%d\n",c);
printf("%d\n",d);
return 0;
}
