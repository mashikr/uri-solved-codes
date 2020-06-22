#include<stdio.h>
int main()
{
    int x,n,i,j;
    scanf("%d",&x);
    for(j=0;j<x;j++){
    int sum=0;
    scanf("%d",&n);
    for(i=1;i<n;i++){
       if(n%i==0){
        sum+=i;
       }
    }
    if(sum==n){
        printf("%d eh perfeito\n",n);
    }
    else{
       printf("%d nao eh perfeito\n",n);
    }
    }
    return 0;
}
