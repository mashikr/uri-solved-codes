#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    if(n>=1&& n<=1000){
    for(i=1;i<=n;i++){
        printf("%d %d %d\n",i,i*i,i*i*i);
        printf("%d %d %d\n",i,(i*i)+1,(i*i*i)+1);
    }
    }
    return 0;
}
