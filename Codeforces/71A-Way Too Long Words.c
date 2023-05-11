#include<stdio.h>
void abbre(char str[]){
    int i,count =0;

    for(i=0;str[i]!='\0';i++){
        if(str[i]!=' '){
            count=count+1;
        }
    }
    if(count>10){
        printf("%c%d%c\n",str[0],(count-2),str[count-1]);
    }
    else{
        printf("%s\n",str);
    }

}

int main(){

int n,i;
scanf("%d",&n);
char strr[100];
for(i=1;i<=n;i++){
    //fgets(strr,sizeof(strr),stdin);
    scanf("%s",strr);
    abbre(strr);
}
return 0;
}
