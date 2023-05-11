#include<stdio.h>
int main(){
int i,j;double a[100];
for(i=0;i<100;i++){
    scanf("%lf",&a[i]);
}
for(j=0;j<100;j++){
    if(a[j]<=10){
        printf("A[%d] = %.1lf\n",j,a[j]);
    }
}
return 0;
}
