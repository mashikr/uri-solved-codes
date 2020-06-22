#include<stdio.h>
int main()
{
    int N[100];
    double x;
    int i;
    scanf("%lf",&x);
    for(i=0;i<100;i++){
        if(i==0){
            printf("N[%d] = %.4lf\n",i,x);
        }
        else{
            x=x/2;
         printf("N[%d] = %.4lf\n",i,x);
        }

    }

    return 0;
}

