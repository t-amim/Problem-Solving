#include<stdio.h>
#include<math.h>
int main(){
int ary[5][5];int a,b;

for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        scanf("%d",&ary[i][j]);
    }
}

/*for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        printf("%d ",ary[i][j]);
    }
    printf("\n");
}*/

for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        if(ary[i][j]==1){
        a=i+1;b=j+1;
    }
}
}
int move=abs(3-a)+abs(3-b);
printf("%d\n",move);
//printf("\n %d %d",a,b);

return 0;
}
