#include<stdio.h>
int main(){
int a,b,n; char ch;
float m[12][12];float sum=0,avg=0;
scanf("%d %c",&n,&ch);
for(int i=0;i<12;i++){
    for(int j=0;j<12;j++){
        scanf("%f",&m[i][j]);
    }
}

for(a=0;a<12;a++){
    sum=sum+m[n][a];
    avg=sum/12.0;
}
if(ch=='S'){ printf("%.1f\n",sum); }
if(ch=='M'){ printf("%.1f\n",avg); }

return 0;
}
