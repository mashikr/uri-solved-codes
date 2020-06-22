#include<stdio.h>
int main()
{
    int N[10];
    int n,i;
    scanf("%d",&n);
    for(i=0;i<10;i++){
        if(i==0){
            N[i]=n;
            printf("N[%d] = %d\n",i,N[i]);
        }
        else{
        N[i]=N[i-1]*2;
        printf("N[%d] = %d\n",i,N[i]);
        }

    }
    return 0;
}
