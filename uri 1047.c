#include<stdio.h>
int main()
{
    int a,b,c,d,x,y;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(c>a){
        x=c-a;
    }
    else{
        x=(24-a)+c;
    }
    y=d-b;
    if(y<0){
      x--;
      y=60+y;
    }

     printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",x,y);
    return 0;
}

