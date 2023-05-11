#include<stdio.h>
int main(){
int pa,pb,n,i,c=0; double g1,g2;
scanf("%d",&n);
for(i=1;i<=n;i++){
    scanf("%d%d%lf%lf",&pa,&pb,&g1,&g2);

    while(pb>=pa && c<102){
        pa=pa + (int)(pa*(g1/100.00));
        pb=pb + (int)(pb*(g2/100.00));
        c++;
    }
    if(c>100){
        printf("Mais de 1 seculo.\n");
    }
    else{
        printf("%d anos.\n",c);
    }
    c=0;

}
return 0;
}
