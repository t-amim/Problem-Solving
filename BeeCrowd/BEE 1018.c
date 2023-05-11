#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    printf("%d\n",n);
    if(0<n< 1000000){
        int a=n/100;
        int b=(n-100*a);
        printf("%d nota(s) de R$ 100,00\n",a);

        int c=b/50;
        int d=b-50*c;
        printf("%d nota(s) de R$ 50,00\n",c);

        int e=d/20;
        int f=d-20*e;
        printf("%d nota(s) de R$ 20,00\n",e);


        int g=f/10;
        int h=f-10*g;
        printf("%d nota(s) de R$ 10,00\n",g);


        int i=h/5;
        int j=h-5*i;
        printf("%d nota(s) de R$ 5,00\n",i);


        int k=j/2;
        int l=j-2*k;
        printf("%d nota(s) de R$ 2,00\n",k);


        int m=l/1;
        //int p=l-1*m;
        printf("%d nota(s) de R$ 1,00\n",m);

        //printf("%d %d %d %d %d %d %d %d %d %d %d ",a,b,c,d,e,f,g,h,j,k,l,m);
    }
return 0;
}
