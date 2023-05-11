#include<stdio.h>
int main(){
int n,n1,n2,a=3;
scanf("%d",&n);
n1=0,n2=1;
printf("%d %d",n1,n2);
int nextTerm=n1+n2;
while(a<=n){
    printf(" %d",nextTerm);
    n1=n2;
    n2=nextTerm;
    nextTerm=n1+n2;
    a++;
    //printf("%d",a);
}
printf("\n");
return 0;
}
