#include<stdio.h>
int main()
{
    int a,b,x;
    scanf("%d%d",&a,&b);
    if(b>a){
        x=b-a;
    }
    else{
        x=(24-a)+b;
    }
     printf("O JOGO DUROU %d HORA(S)\n",x);
    return 0;
}
