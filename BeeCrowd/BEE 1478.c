#include<stdio.h>
int main(){
int a,b,c,d,i,j,k,l,m=1,n=1,p,q,num;int x=2,y=2;
while(1){
    scanf("%d",&num);
    if(num==0){break;}
    else{
        int ary[num][num];
        for(i=0;i<num;i++){
            for(j=0;j<num;j++){
                ary[i][j]=1;
            }
        }
        for(p=1;p<num;p++){
            for(a=p;a<num;a++){
                for(b=0;b<m;b++){
                ary[a][b]=x;
                }
                m++;
            }
            x++;m=1;
        }
        x=2;
        for(q=0;q<(num-1);q++){
            for(c=0;c<((num-1)-q);c++){
                for(d=n;d<num;d++){
                    ary[c][d]=y;
                }
                n++;
            }
            y++;n=q+2;
        }
        y=2;n=1;
        for(k=0;k<num;k++){
            for(l=0;l<num;l++){
                if(l==0){printf("%3d",ary[k][l]);}
                else {printf("%4d",ary[k][l]);}
            }
            printf("\n");
        }
        printf("\n");
    }
}
return 0;
}
