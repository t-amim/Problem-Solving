#include<stdio.h>
int main(){
int x ,i;
scanf("%d",&x);
if(x%2 !=0){
for(i=x;i<x+11;i=i+2){
    printf("%d\n",i);
}}
else{
    for(i=x+1;i<=x+11;i=i+2){
    printf("%d\n",i);
}
}
return 0;
}
