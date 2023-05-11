#include<stdio.h>
int main(){
double a,b;int c;
scanf("%lf",&a);
if(a>=0.0&&a<=400.00){
    b=a+(a*.15);c=15;

}
else if(a<=800.00){
    b=a+(a*.12);c=12;
}
else if(a<=1200.00){
    b=a+(a*.10);c=10;
}
else if(a<=2000.00){
    b=a+(a*.07);c=7;
}
else if(a>2000.00){
    b=a+(a*.04);c=4;
}
   printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %d %%\n",b,(b-a),c);
return 0;
}
