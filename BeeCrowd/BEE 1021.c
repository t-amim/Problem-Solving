#include<stdio.h>
int main(){
    double n,x;
    double note[] = {100.0,50.0,20.0,10.0,5.0,2.0,1.0,.50,.25,.10,.05,.01};
    int a,b;// a=number of note,b=array number
    scanf("%lf",&n);x=n;
    if(0<=n<=1000000.00){
        printf("NOTAS:\n");
        b=0;
        while(note[b]>1.0){
            a=x/note[b];
            x=x-(note[b]*a);
            printf("%d nota(s) de R$ %.2lf\n",a,note[b]);
            b++;

    }
        printf("MOEDAS:\n");
        b=6;
         while(note[b]>=.01&&note[b]<=1.0){
            a=x/note[b];
            x=x-(note[b]*a);
            printf("%d moeda(s) de R$ %.2lf\n",a,note[b]);
            b++;

        }


  }
return 0;
}
