#include<stdio.h>
int main(){
    int days;
    scanf("%d",&days);
    int year=days/365;
    int dayrim=days%365;
    int month=dayrim/30;
    int day=dayrim%30;
    printf("%d ano(s)\n",year);
    printf("%d mes(es)\n",month);
    printf("%d dia(s)\n",day);
return 0;
}
