#include<stdio.h>
int main(){
int a,b,c=1,d=5,n; char ch;
double m[12][12];double sum=0,avg=0;
scanf("%c",&ch);
for(int i=0;i<12;i++){
    for(int j=0;j<12;j++){
        scanf("%lf",&m[i][j]);
    }
}

for(a=1;a<=5;a++){
    for(b=0;b<c;b++){
    sum=sum+m[a][b];}
    c++;
}
for(a=6;a<=10;a++){
    for(b=0;b<d;b++){
    sum=sum+m[a][b];}
    d--;
}
 avg=sum/30.00;
if(ch=='S'){ printf("%.1lf\n",sum); }
if(ch=='M'){ printf("%.1lf\n",avg); }

return 0;
}
