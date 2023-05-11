#include<stdio.h>
int main(){
char a[15];
char b[15];
char c[15];
scanf("%s%s%s",&a ,&b,&c);
if(a[0]=='v'&&b[0]=='a'&&c[0]=='c'){printf("aguia\n");}
if(a[0]=='v'&&b[0]=='a'&&c[0]=='o'){printf("pomba\n");}
if(a[0]=='v'&&b[0]=='m'&&c[0]=='o'){printf("homem\n");}
if(a[0]=='v'&&b[0]=='m'&&c[0]=='h'){printf("vaca\n");}
if(a[3]=='e'&&b[3]=='e'&&c[3]=='a'){printf("pulga\n");}
if(a[3]=='e'&&b[3]=='e'&&c[3]=='b'){printf("lagarta\n");}
if(a[3]=='e'&&b[3]=='l'&&c[3]=='a'){printf("sanguessuga\n");}
if(a[3]=='e'&&b[3]=='l'&&c[3]=='v'){printf("minhoca\n");}
return 0;
}
