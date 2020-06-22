#include<stdio.h>
int main()
{
    while(1){
            int n,j;
        scanf("%d",&n);
        if(n==0){
            break;
        }
        for(j=1;j<=n;j++){
            if(j==1){
        printf("%d",j);
        }
        else {
        printf(" %d",j);
        }
        }
    printf("\n");
    }
    return 0;
}
