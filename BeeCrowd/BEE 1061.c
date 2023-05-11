#include<stdio.h>
int main(){
int d1,h1,m1,s1,d2,h2,m2,s2; char a[4]="Dia"; char b[4]=" : ";
scanf("%s %d",a,&d1);
scanf("%d%s%d%s%d",&h1,b,&m1,b,&s1);
scanf("%s %d",a,&d2);
scanf("%d%s%d%s%d",&h2,b,&m2,b,&s2);
//printf("%d %d %d %d %d %d %d %d\n",d1,h1,m1,s1,d2,h2,m2,s2);
int dif=((((((d2*24)+h2)*60)+m2)*60)+s2)-((((((d1*24)+h1)*60)+m1)*60)+s1);
int day=dif/(24*60*60);
printf("%d dia(s)\n",day);

int x=dif%(24*60*60);
int hour=x/(60*60);
printf("%d hora(s)\n",hour);

int y=x%(60*60);
int min=y/60;
printf("%d minuto(s)\n",min);

int sec=y%60;
printf("%d segundo(s)\n",sec);

return 0;
}
