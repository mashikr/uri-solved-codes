#include<stdio.h>
int main()
{
    int n,x,y,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %d",&x,&y);
        int sum=0;
        if(x>y){
            for(j=y+1;j<x;j++){
                if(j%2!=0){
                    sum=sum+j;
                }
            }
        }
        else {
            for(j=x+1;j<y;j++){
                if(j%2!=0){
                    sum=sum+j;
                }
            }

        }
        printf("%d\n",sum);
    }
    return 0;
}
