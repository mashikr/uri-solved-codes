#include<stdio.h>
int main()
{
    int N[1000];
    int i,t,j,k;
    scanf("%d",&t);
    for(i=0;i<1000;i+=t){
        for(j=0,k=i;j<t;j++,k++){
        if(k>=1000){
            break;
        }
        else{
        printf("N[%d] = %d\n",k,j);
        }
        }
    }
}
