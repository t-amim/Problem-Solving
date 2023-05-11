#include<stdio.h>
int main(){
int a,b,n; char ch;
float m[12][12];float sum=0,avg=0;
scanf("%c",&ch);
for(int i=0;i<12;i++){
    for(int j=0;j<12;j++){
        scanf("%f",&m[i][j]);
    }
}

for(a=1;a<12;a++){
    sum=sum+m[0][a];
}
for(a=2;a<12;a++){
    sum=sum+m[1][a];
}
for(a=3;a<12;a++){
    sum=sum+m[2][a];
}
for(a=4;a<12;a++){
    sum=sum+m[3][a];
}
for(a=5;a<12;a++){
    sum=sum+m[4][a];
}
for(a=6;a<12;a++){
    sum=sum+m[5][a];
}
for(a=7;a<12;a++){
    sum=sum+m[6][a];
}
for(a=8;a<12;a++){
    sum=sum+m[7][a];
}
for(a=9;a<12;a++){
    sum=sum+m[8][a];
}
for(a=10;a<12;a++){
    sum=sum+m[9][a];
}
for(a=11;a<12;a++){
    sum=sum+m[10][a];
}
avg = sum/66.00;
if(ch=='S'){ printf("%.1f\n",sum); }
if(ch=='M'){ printf("%.1f\n",avg); }

return 0;
}
