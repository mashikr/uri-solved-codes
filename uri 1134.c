#include<stdio.h>
int main()
{
    int a,A=0,G=0,D=0;
    while (1){
        scanf("%d",&a);
            if(a==1){
                A+=1;
            }
            else if(a==2){
                G+=1;
            }
            else if(a==3){
                D+=1;
            }
        else if(a==4){
           break;
        }
        else {
            printf("MUITO OBRIGADO\n");
        }


    }
       printf("Alcool: %d\nGasolina: %d\nDisel: %d",A,G,D);
    return 0;
}
