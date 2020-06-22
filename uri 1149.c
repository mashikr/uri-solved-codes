#include<stdio.h>
int main()
{
    int a,n,sum=0,i;
    scanf("%d",&a);
    while(1){
        scanf("%d",&n);
        if (n>0)
         break;
    }
    sum=a;
    for(i=1;i<n;i++){
        sum+=a+i;
    }
    printf("%d\n",sum);
}
