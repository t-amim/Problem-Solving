#include<stdio.h>
int main(){
int i,j,k,l,a,b,c,n,hf;
    while(1){
    scanf("%d",&n);
        if(n==0){break;}
        else{
            if(n%2==0){hf=n/2;}
            else {hf=(n/2)+1;}
            a=0;b=n;c=1;
            int ary[n][n];
            for(int x=1;x<=hf;x++){
                for(i=a;i<b;i++){
                    for(j=a;j<b;j++){
                        ary[i][j]=c;
                    }
                }
                a++;b--;c++;
            }
             for(k=0;k<n;k++){
                for(l=0;l<n;l++){
                    if(l==0){printf("%3d",ary[k][l]);}
                    else{printf("%4d",ary[k][l]);}
                }
                printf("\n");
             }
              printf("\n");
        }
    }
return 0;
}
