 /*#include<stdio.h>
int main(){
    int x,y;
    double t;
    scanf("%d %d",&x,&y);
    switch (x){
    case 1:t=y*4.00;printf("Total: R$ %.2lf\n",t);
    break;

    case 2:t=y*4.50;printf("Total: R$ %.2lf\n",t);
    break;

     case 3:t=y*5.00;printf("Total: R$ %.2lf\n",t);
    break;

     case 4:t=y*2.00;printf("Total: R$ %.2lf\n",t);
    break;

     case 5:t=y*1.50;printf("Total: R$ %.2lf\n",t);
    break;
    }
return 0;
}   */

#include<stdio.h>
int main(){
    int x,y; double t;
    scanf("%d %d",&x, &y);
    if(x==1){
        t=y*4.00;printf("Total: R$ %.2lf\n",t);
    }
    else if(x==2){
        t=y*4.50;printf("Total: R$ %.2lf\n",t);
    }
    else if(x==3){
        t=y*5.00;printf("Total: R$ %.2lf\n",t);
    }
    else if(x==4){
        t=y*2.00;printf("Total: R$ %.2lf\n",t);
    }
    else if(x==5){
        t=y*1.50;printf("Total: R$ %.2lf\n",t);
    }
return 0;
}
