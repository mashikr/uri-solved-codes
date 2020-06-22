#include<stdio.h>
int main()
{
    int i,n,x,k;

    scanf("%d",&x);
    for(k=0;k<x;k++){
    scanf("%d",&n);
    long long int arr[n+1];
    arr[0]=0;
    arr[1]=1;
    for(i=2;i<=n;i++){
        arr[i]=arr[i-1]+arr[i-2];
    }
    printf("Fib(%d) = %lld\n",n,arr[n]);
    }
    return 0;
}
