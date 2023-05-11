#include<stdio.h>
int main(){
int a,b,c=11,n; char ch;
float m[12][12];float sum=0,avg=0;
scanf("%c",&ch);
for(int i=0;i<12;i++){
    for(int j=0;j<12;j++){
        scanf("%f",&m[i][j]);
    }
}

for(a=1;a<12;a++){
    for(b=c;b<12;b++){
    sum=sum+m[a][b];}
    c--;
}
 avg=sum/66.0;
if(ch=='S'){ printf("%.1f\n",sum); }
if(ch=='M'){ printf("%.1f\n",avg); }

return 0;
}
