#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=1,j=1;i<=n;i++,j+=4){
        printf("%d %d %d PUM\n",j,j+1,j+2);
    }
    return 0;
}
