#include<stdio.h>
int main()
{
   int n,x,i,j;
   scanf("%d %d",&n,&x);
   for (i=1;i<=x;i=i+n){
    for(j=i;j<=i+n-1;j++){
        printf("%d",j);
        }
    }
    printf("\n");
   }
   return 0;
}
