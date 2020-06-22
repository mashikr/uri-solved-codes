#include<stdio.h>
int main()
{
    while(1){
        int i;
        scanf("%d",&i);
        if (i==2002){
            printf("Acesso Permitido\n");
            break;
        }
        else{
            printf("Senha Invalida\n");
        }
    }
    return 0;
}
