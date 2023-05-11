#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int hour=n/3600;
    int minuterem=n%3600;
    int minute=minuterem/60;
    int sec=minuterem%60;
    printf("%d:%d:%d\n",hour,minute,sec);
return 0;
}
