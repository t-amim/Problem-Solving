#include<stdio.h>
int main(){
    double n,x;int a;
    scanf("%lf",&n);
    x=n;
    if(n>=0&&n<=1000000.00){
        printf("NOTAS:\n");
        a=x/100.00;
        printf("%d nota(s) de R$ 100.00\n",a);
        x=x-a*100.00;

        a=x/50.00;
        printf("%d nota(s) de R$ 50.00\n",a);
        x=x-a*50.00;

        a=x/20.00;
        printf("%d nota(s) de R$ 20.00\n",a);
        x=x-a*20.00;

        a=x/10.00;
        printf("%d nota(s) de R$ 10.00\n",a);
        x=x-a*10.00;

        a=x/5.00;
        printf("%d nota(s) de R$ 5.00\n",a);
        x=x-a*5.00;

        a=x/2.00;
        printf("%d nota(s) de R$ 2.00\n",a);
        x=x-a*2.00;

        printf("MOEDAS:\n");

        a=x/1.00;
        printf("%d moeda(s) de R$ 1.00\n",a);
        x=x-a*1.00;

        x=x*100;
//  printf("     %lf   ",x);
        a=x/50.0;
        printf("%d moeda(s) de R$ 0.50\n",a);
        x=x-a*50.0;

        a=x/25.0;
        printf("%d moeda(s) de R$ 0.25\n",a);
        x=x-a*25.0;

        a=x/10.0;
         printf("%d moeda(s) de R$ 0.10\n",a);
         x=x-a*10.0;

         a=x/5.0;
          printf("%d moeda(s) de R$ 0.05\n",a);
          x=x-a*5.0;

          a=x/1.0;
         // printf("  %lf   ",x);
        printf("%d moeda(s) de R$ 0.01\n",a);

    }
return 0;
}
