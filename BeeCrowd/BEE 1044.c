#include<stdio.h>
int main(){
int a,b,c;
scanf("%d %d",&a,&b);
if(a>b){
    c=a%b;
}
else{
    c=b%a;
}
//printf("%d",c);
if(c==0){
    printf("Sao Multiplos\n");
}
else{
    printf("Nao sao Multiplos\n");
}
return 0;
}
