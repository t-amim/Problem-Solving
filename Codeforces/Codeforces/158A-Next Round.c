#include<stdio.h>
int main(){
    int a,b,count =0;
    scanf("%d %d",&a,&b);

    int ary[a];

    for(int i=0;i<a;i++){
        scanf("%d",&ary[i]);
    }

    for(int j=0;j<a;j++){
        if(ary[j]>=ary[b-1] && ary[j]>0){count ++;}
    }

    printf("%d\n",count);
return 0;
}
