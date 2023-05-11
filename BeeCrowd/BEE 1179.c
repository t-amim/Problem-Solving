#include<stdio.h>
int main(){
int i,j,k=0,l=0,x=0,y=0;
int n[15],par[5],impar[5];
for(int a=0;a<15;a++){
    scanf("%d",&n[a]);
}

for(i=0;i<15;i++){
    if(n[i]%2 == 0){
        par[k]=n[i];
        k++;x++;
        if(k==5){k=0;}
    }

    else{
        impar[l]=n[i];
        l++;y++;
        if(l==5){l=0;}
    }
    if(x==5){
        for(int b=0;b<5;b++){
            printf("par[%d] = %d\n",b,par[b]);
            x=0;
        }
    }
    if(y==5){
        for(int b=0;b<5;b++){
            printf("impar[%d] = %d\n",b,impar[b]);
            y=0;
        }
    }
}

for(int c=0;c<y;c++){
    printf("impar[%d] = %d\n",c,impar[c]);
}

for(int c=0;c<x;c++){
    printf("par[%d] = %d\n",c,par[c]);
}
return 0;
}
